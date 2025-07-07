using Microsoft.Extensions.DependencyInjection;
using Microsoft.Extensions.Hosting;
using Microsoft.Extensions.Logging;
using System;
using System.Windows;
using System.Windows.Threading;
using UE4ExtractorCore.Services;
using UE4ExtractorGUI.ViewModels;

namespace UE4ExtractorGUI
{
    public partial class App : Application
    {
        private IHost? _host;

        protected override void OnStartup(StartupEventArgs e)
        {
            AppDomain.CurrentDomain.UnhandledException += OnUnhandledException;
            DispatcherUnhandledException += OnDispatcherUnhandledException;

            try
            {
                _host = Host.CreateDefaultBuilder()
                    .ConfigureServices((context, services) =>
                    {
                        services.AddLogging(builder =>
                        {
                            builder.AddConsole();
                            builder.AddDebug();
                            builder.SetMinimumLevel(LogLevel.Debug);
                        });

                        services.AddSingleton<IDLLInjector, DLLInjector>();

                        services.AddTransient<MainViewModel>();

                        services.AddTransient<MainWindow>();
                    })
                    .Build();

                var logger = _host.Services.GetRequiredService<ILogger<App>>();
                logger.LogInformation("Application starting up...");

                var mainWindow = _host.Services.GetRequiredService<MainWindow>();
                MainWindow = mainWindow;
                mainWindow.Show();

                logger.LogInformation("Main window created and shown successfully");

                base.OnStartup(e);
            }
            catch (Exception ex)
            {
                MessageBox.Show($"Failed to start application: {ex.Message}\n\nStack trace:\n{ex.StackTrace}",
                    "Startup Error", MessageBoxButton.OK, MessageBoxImage.Error);

                Environment.Exit(1);
            }
        }

        protected override void OnExit(ExitEventArgs e)
        {
            try
            {
                _host?.Dispose();
            }
            catch (Exception ex)
            {
                MessageBox.Show($"Error during application shutdown: {ex.Message}",
                    "Shutdown Error", MessageBoxButton.OK, MessageBoxImage.Warning);
            }

            base.OnExit(e);
        }

        private void OnUnhandledException(object sender, UnhandledExceptionEventArgs e)
        {
            var exception = e.ExceptionObject as Exception;
            var message = exception?.Message ?? "Unknown error occurred";

            MessageBox.Show($"Unhandled exception: {message}\n\nStack trace:\n{exception?.StackTrace}",
                "Critical Error", MessageBoxButton.OK, MessageBoxImage.Error);

            if (e.IsTerminating)
            {
                Environment.Exit(1);
            }
        }

        private void OnDispatcherUnhandledException(object sender, DispatcherUnhandledExceptionEventArgs e)
        {
            MessageBox.Show($"UI thread exception: {e.Exception.Message}\n\nStack trace:\n{e.Exception.StackTrace}",
                "UI Error", MessageBoxButton.OK, MessageBoxImage.Error);

            e.Handled = true;
        }
    }
}