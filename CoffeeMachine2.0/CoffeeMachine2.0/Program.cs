using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace CoffeeMachine2._0
{
    static class Program
    {
        /// <summary>
        /// The main entry point for the application.
        /// </summary>
        [STAThread]
        static void Main()
        {
            bool waterConnected = true;

            if (waterConnected == true)
            {
                Application.EnableVisualStyles();
                Application.SetCompatibleTextRenderingDefault(false);
                Application.Run(new CoffeeMachine());
            }
            else
            {
                string message = "Please connect to a water tap\n"+
                                 "The machine will shut off";
                string title = "Error";
                MessageBox.Show(message, title);
            }
           
        }
        
    }
}
