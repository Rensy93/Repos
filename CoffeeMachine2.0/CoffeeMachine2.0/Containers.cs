using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace CoffeeMachine2._0
{
    class Containers
    {
        public const double MAX = 20;
        //coffee powder
        public const double MAX_COFFEEPUDER = 20;
        private double _coffeePuderCount;
        //chocolate powder
        public const double MAX_CHOCOLATEPOWDER = 20;
        private double _chocolatePuderCunt;
        //milk
        public const double MAX_MILK = 20;
        private double _milkCount;
        //sugar
        public const double MAX_SUGAR = 20;
        private double _sugarCount;
        //carbonated
        public const double MAX_CARBONATED = 20;
        private double _carbonatedCount;
        //water
        public readonly double MAX_WATER = 20;
        private double _waterContainerCount;
        //coffee grounds = kaffesump
        public readonly int MAX_COFFEEGROUNDS = 20;
        private int _coffeeGrounds;

        public Containers()
        {
            _coffeeGrounds = 0;
            _waterContainerCount = 0.0;
            _coffeePuderCount = 20.0;
            _chocolatePuderCunt = 20.0;
            _milkCount = 20.0;
            _sugarCount = 20.0;
            _carbonatedCount = 20.0;
        }

        //coffee grounds
        public int coffeeGroundsCount
        {
            get
            {
                return _coffeeGrounds;
            }
            set
            {
                _coffeeGrounds += value;
            }
        }
        //Water
        public double waterContainerCount
        {
            get
            {
                return _waterContainerCount;
            }
            set
            {
                _waterContainerCount -= value;
            }
        }
        //coffe
        public double coffeePuderCount
        {
            get
            {
                return _coffeePuderCount;
            }
            set
            {
                _coffeePuderCount -= value;
            }
        }

        //choclate
        public double chocolatePuderCunt
        {
            get
            {
                return _chocolatePuderCunt;
            }
            set
            {
                _chocolatePuderCunt -= value;
            }
        }

        //milk
        public double milkCount
        {
            get
            {
                return _milkCount;
            }
            set
            {
                _milkCount -= value;
            }
        }

        //Sugar
        public double sugerCount
        {
            get
            {
                return _sugarCount;
            }
            set
            {
                _sugarCount -= value;
            }
        }
        //carbonated
        public double carbonatedCount
        {
            get
            {
                return _carbonatedCount;
            }
            set
            {
                _carbonatedCount -= value;
            }
        }
        //emty coffeeGrounds
        public void EmtyCoffeeGrounds()
        {
            string message = "You need to emty coffee grounds container\n" +
                             "Then pressure yes";
            string title = "Emty Coffee Grounds";
            MessageBoxButtons buttons = MessageBoxButtons.YesNo;

            DialogResult result = MessageBox.Show(message, title, buttons);
            if (result == DialogResult.Yes)
            {
                coffeeGroundsCount = -MAX_COFFEEGROUNDS;
            }
            else
            {
                
                EmtyCoffeeGrounds();
            }

        }
        //Water Refill
        public void refillWater()
        {
            if (waterContainerCount <= 1.0)
            {
                double refillWaterAmount = MAX - _waterContainerCount;
                waterContainerCount = -refillWaterAmount;
            }
        }
        public void refill()
        {
            if (coffeePuderCount <= 0.0)
            {
                
                coffeePuderCount = -MAX;
            }
            if (milkCount <= 1.0)
            {
                double refillMilkAmount = MAX - _milkCount;
                milkCount = -refillMilkAmount;
            }
            if (sugerCount <= 0)
            {
                sugerCount = -MAX;
            }
            if (chocolatePuderCunt <= 0)
            {
                chocolatePuderCunt = -MAX;
            }
            if (carbonatedCount <= 0)
            {
                carbonatedCount = -MAX;
            }

        }
    }
}
