using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Media;

namespace CoffeeMachine2._0
{
    public partial class CoffeeMachine : Form
    {
        
        Log log = new Log();
        Drinks drinks = new Drinks();
        Containers containers = new Containers();
        
        public CoffeeMachine()
        {
            InitializeComponent();
            this.FormBorderStyle = FormBorderStyle.FixedSingle;
            
        }
       
        //Coffee
        private void CoffeeButton_Click(object sender, EventArgs e)
        {
            CoffeePanel.Visible = true;
            CoffeeBackButton.Visible = true;
            ServingLable.Text = "Preparing Coffee";
            TakeCoffeeButton.Text = "Take coffee";

        }
        //Milk & Sugar
        private void MilklSugarButton_Click(object sender, EventArgs e)
        { 
            ServingPanel.Visible = true;
            drinks.coffee(1);
            playSound(1);
        }
        //Milk
        private void MilkButton_Click(object sender, EventArgs e)
        {
            
            ServingPanel.Visible = true;
            drinks.coffee(2);
            playSound(1);

        }
        //Sugar
        private void SugarButton_Click(object sender, EventArgs e)
        {
            ServingPanel.Visible = true;
            drinks.coffee(3);
            playSound(1);

        }
        //Nothing
        private void NothingButton_Click(object sender, EventArgs e)
        {
            ServingPanel.Visible = true;
            drinks.coffee(4);
            playSound(1);
        }

        private void CoffeeBackButton_Click(object sender, EventArgs e)
        {
            TakeCoffeeButton.Visible = false;
            CoffeePanel.Visible = false;
            ServingPanel.Visible = false;
            SettingsPanel.Visible = false;
            LogPanel.Visible = false;
        }
        //cafe au lait
        private void CafeAuLaitButton_Click(object sender, EventArgs e)
        {
            CoffeePanel.Visible = true;
            ServingPanel.Visible = true;
            ServingLable.Text = "Preparing Coffee";
            TakeCoffeeButton.Text = "Take coffee";
            drinks.cafeAuLait();
            playSound(1);

        }
        //Hot Chocolate
        private void hotChocolateButton_Click(object sender, EventArgs e)
        {
            CoffeePanel.Visible = true;
            ServingPanel.Visible = true;
            ServingLable.Text = "Preparing drink";
            TakeCoffeeButton.Text = "Take drink";
            drinks.hotChocolate();
            playSound(3);

        }
        //Tee water
        private void TeeWaterButton_Click(object sender, EventArgs e)
        {
            CoffeePanel.Visible = true;
            ServingPanel.Visible = true;
            ServingLable.Text = "Preparing drink";
            TakeCoffeeButton.Text = "Take drink";
            drinks.teeWater();
            playSound(3);

        }
        //Carbonated Water
        private void CarbonatedWaterButton_Click(object sender, EventArgs e)
        {
            CoffeePanel.Visible = true;
            ServingPanel.Visible = true;
            ServingLable.Text = "Preparing drink";
            TakeCoffeeButton.Text = "Take drink";
            drinks.carbonatedWater();
            playSound(2);
        }
        //water
        private void WaterButton_Click(object sender, EventArgs e)
        {
            
            CoffeePanel.Visible = true;
            ServingPanel.Visible = true;
            ServingLable.Text = "Preparing drink";
            TakeCoffeeButton.Text = "Take drink";
            drinks.water();
            playSound(2);
            
            
        }
        //Setting
        private void SettingButton_Click(object sender, EventArgs e)
        {
            EmptyCoffeeGroundsButton.Visible = true;
            CoffeePanel.Visible = true;
            ServingPanel.Visible = true;
            SettingsPanel.Visible = true;
            
        }
        
        //Empty coffee grounds
        private void EmptyCoffeeGroundsButton_Click(object sender, EventArgs e)
        {
            //Hmm containers refill funkar inte här fast den gör det på de andra plaserna??
            //containers.EmtyCoffeeGrounds();
            drinks.EmtyCoffeeGrounds();
        }
        //Refill
        private void RefillButton_Click(object sender, EventArgs e)
        {
            //Hmm containers refill funkar inte här fast den gör det på de andra plaserna??
            //containers.refill();
            drinks.refill();
        }
        //Log
        private void LogButton_Click(object sender, EventArgs e)
        {
            EmptyCoffeeGroundsButton.Visible = false;
            LogPanel.Visible = true;
            Log();
        }
        //Bill
        private void BillButton_Click(object sender, EventArgs e)
        {
            EmptyCoffeeGroundsButton.Visible = false;
            LogPanel.Visible = true;
            Bill();
        }
        //Return
        private void ReturnButton_Click(object sender, EventArgs e)
        {
            CoffeePanel.Visible = false;
            ServingPanel.Visible = false;
            SettingsPanel.Visible = false;
        }
        //Quit
        private void QuitButton_Click(object sender, EventArgs e)
        {
            Environment.Exit(0);
        }

        //coffee is redy
        private void TakeCoffeeButton_Click(object sender, EventArgs e)
        {
            TakeCoffeeButton.Visible = false;
            CoffeePanel.Visible = false;
            ServingPanel.Visible = false;
            SettingsPanel.Visible = false;

        }
        //Back log page
        private void BillBackButton_Click(object sender, EventArgs e)
        {
            TakeCoffeeButton.Visible = false;
            CoffeePanel.Visible = false;
            ServingPanel.Visible = false;
            SettingsPanel.Visible = false;
            LogPanel.Visible = false;
        }


        public async void playSound(int x)
        {
            try
            {
                CoffeeBackButton.Visible = false;
                await Task.Delay(0100);
                if (x == 1)
                {
                    System.Media.SoundPlayer player = new System.Media.SoundPlayer(CoffeeMachine2._0.Properties.Resources.PouringDrinkSound1);
                    player.PlaySync();
                    ServingLable.Text = "  Coffee is ready";
                    TakeCoffeeButton.Visible = true;
                }

                if (x == 2)
                {

                    System.Media.SoundPlayer player = new System.Media.SoundPlayer(CoffeeMachine2._0.Properties.Resources.PourGlassWaterSound);
                    player.PlaySync();
                    ServingLable.Text = "  Drink is ready";
                    TakeCoffeeButton.Visible = true;
                }
                if (x == 3)
                {
                    System.Media.SoundPlayer player = new System.Media.SoundPlayer(CoffeeMachine2._0.Properties.Resources.PouringHotTea);
                    player.PlaySync();
                    ServingLable.Text = "  Drink is ready";
                    TakeCoffeeButton.Visible = true;
                }
            }
            catch (Exception ex)
            {
                Console.WriteLine(ex);
            }
        }
        public void Log()
        {
            logLabel.Visible = true;
            CountLabel.Visible = true;
            BillLabel.Visible = false;
            string coffe = log.logCoffeeCount.ToString() + "st";
            string milk = log.logMilkCount.ToString() + "st";
            string sugar = log.logSugarCount.ToString() + "st";
            string cafeAuLait = log.logCafeAuLaitCount.ToString() + "st";
            string hotChocolate = log.logHotChocolateCount.ToString() + "st";
            string teeWater = log.logTeeWaterCount.ToString() + "st";
            string carbonated = log.logCarbonatedCount.ToString() + "st";
            string water = log.logWaterCount.ToString() + "st";

            logLabel.Text = "Coffee:         " + "\n" +
                            "Milk:           " + "\n" +
                            "Sugar:          " + "\n" +
                            "Cafe au lait:   " + "\n" +
                            "Hot chocolate:  " + "\n" +
                            "Tee water:      " + "\n" +
                            "Carbonated:     " + "\n" +
                            "Water:          " + "\n";

            CountLabel.Text = drinks.Log();

        }
        public void Bill()
        {
            BillLabel.Visible = true;
            logLabel.Visible = false;
            CountLabel.Visible = false;

            BillLabel.Text = "Total bill \n " + drinks.bill();
        }
    }
}
