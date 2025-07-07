using System;
using System.Windows;
using UE4ExtractorGUI.ViewModels;

namespace UE4ExtractorGUI
{
    public partial class MainWindow : Window
    {
        public MainViewModel ViewModel { get; }

        public MainWindow(MainViewModel viewModel)
        {
            try
            {
                InitializeComponent();
                ViewModel = viewModel ?? throw new ArgumentNullException(nameof(viewModel));
                DataContext = ViewModel;

                InitializeWindow();
            }
            catch (Exception ex)
            {
                MessageBox.Show($"Failed to initialize main window: {ex.Message}", "Initialization Error",
                    MessageBoxButton.OK, MessageBoxImage.Error);
                throw;
            }
        }

        private void InitializeWindow()
        {
            try
            {
                Closing += MainWindow_Closing;
                MinWidth = 800;
                MinHeight = 500;

                Width = Math.Max(Width, MinWidth);
                Height = Math.Max(Height, MinHeight);
            }
            catch (Exception ex)
            {
                throw new InvalidOperationException("Failed to initialize window properties", ex);
            }
        }

        private void MainWindow_Closing(object? sender, System.ComponentModel.CancelEventArgs e)
        {
            try
            {
                if (ViewModel.IsExtracting)
                {
                    var result = MessageBox.Show(
                        "Asset extraction is currently in progress. Do you want to stop the extraction and exit?",
                        "Extraction in Progress",
                        MessageBoxButton.YesNo,
                        MessageBoxImage.Question,
                        MessageBoxResult.No);

                    if (result == MessageBoxResult.No)
                    {
                        e.Cancel = true;
                        return;
                    }

                    try
                    {
                        ViewModel.StopExtractionCommand.Execute(null);
                    }
                    catch (Exception ex)
                    {
                        MessageBox.Show($"Error stopping extraction: {ex.Message}", "Error",
                            MessageBoxButton.OK, MessageBoxImage.Warning);
                    }
                }

                ViewModel.Dispose();
            }
            catch (Exception ex)
            {
                try
                {
                    ViewModel.Dispose();
                }
                catch
                {
                }
            }
        }

        protected override void OnSourceInitialized(EventArgs e)
        {
            try
            {
                base.OnSourceInitialized(e);

                ViewModel.RefreshProcessesCommand.Execute(null);
            }
            catch (Exception ex)
            {
                MessageBox.Show($"Error during window initialization: {ex.Message}",
                    "Initialization Warning", MessageBoxButton.OK, MessageBoxImage.Warning);
            }
        }
    }
}