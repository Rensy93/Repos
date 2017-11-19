using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Media;
using System.Windows.Forms;
namespace CoffeeMachine2._0
{
    class Drinks
    {
        public const double MAX = 20;
        private const int add = 1;
        private const int decres = 1;

        Log logTest = new Log();
        Containers containers = new Containers();
        
        public void coffee(int secoundChoise)
        {
            //coffe whif milk and sugar
            if (secoundChoise == 1)
            {
                if (containers.coffeePuderCount > 0 && containers.milkCount >= 1 && containers.sugerCount > 0 &&
                    containers.waterContainerCount >= 1 &&
                    containers.coffeeGroundsCount < MAX)
                {
                    containers.coffeePuderCount = 0.80;
                    containers.waterContainerCount = decres;
                    containers.coffeeGroundsCount = add;
                    containers.milkCount = 0.2;
                    containers.sugerCount = decres;
                    logTest.logCoffeeCount = add;
                    logTest.logMilkCount = add;
                    logTest.logSugarCount = add;
                }
                else
                {
                    if (containers.waterContainerCount <= 1)
                    {
                        containers.refillWater();
                        coffee(1);

                    }
                    else if (containers.coffeeGroundsCount == MAX)
                    {
                        containers.EmtyCoffeeGrounds();
                        coffee(1);

                    }
                    else if (containers.coffeePuderCount <= 0)
                    {

                        string msg = ("Refilling coffee puder");
                        MessageBox.Show(msg);
                        containers.refill();
                        coffee(1);


                    }
                    else if (containers.milkCount <= 1)
                    {
                        string msg = ("Refilling milk");
                        MessageBox.Show(msg);
                        containers.refill();
                        coffee(1);
                    }
                    else if (containers.sugerCount <= 0)
                    {
                        string msg = ("Refilling sugar");
                        MessageBox.Show(msg);
                        containers.refill();
                        coffee(1);
                    }
                }
            }
            //coffee whif milk
            else if (secoundChoise == 2)
            {
                if (containers.coffeePuderCount > 0 && containers.milkCount >= 1 && containers.waterContainerCount >= 1 &&
                    containers.coffeeGroundsCount < MAX)
                {
                    containers.coffeePuderCount = decres;
                    containers.waterContainerCount = 0.80;
                    containers.coffeeGroundsCount = add;
                    containers.milkCount = 0.20; ;
                    logTest.logCoffeeCount = add;
                    logTest.logMilkCount = add;
                }
                else
                {
                    if (containers.waterContainerCount <= 1)
                    {
                        containers.refillWater();
                        coffee(2);

                    }
                    else if (containers.coffeeGroundsCount == MAX)
                    {
                        containers.EmtyCoffeeGrounds();
                        coffee(2);

                    }
                    else if (containers.coffeePuderCount <= 0)
                    {
                        string msg = ("Refilling coffee puder");
                        MessageBox.Show(msg);
                        containers.refill();
                        coffee(2);
                    }
                    else if (containers.milkCount <= 1)
                    {
                        string msg = ("Refilling milk");
                        MessageBox.Show(msg);
                        containers.refill();
                        coffee(2);
                    }
                }
            }
            //Coffee whif sugar
            else if (secoundChoise == 3)
            {
                if (containers.coffeePuderCount > 0 && containers.sugerCount > 0 &&
                    containers.waterContainerCount > 0 &&
                    containers.coffeeGroundsCount < MAX)
                {
                    containers.coffeePuderCount = decres;
                    containers.waterContainerCount = decres;
                    containers.coffeeGroundsCount = add;
                    containers.sugerCount = decres;
                    logTest.logCoffeeCount = add;
                    logTest.logSugarCount = add;
                }
                else
                {
                    if (containers.waterContainerCount == 0)
                    {
                        containers.refillWater();
                        coffee(3);

                    }
                    else if (containers.coffeeGroundsCount == MAX)
                    {
                        containers.EmtyCoffeeGrounds();
                        coffee(3);

                    }
                    else if (containers.coffeePuderCount == 0)
                    {
                        string msg = ("Refilling coffee puder");
                        MessageBox.Show(msg);
                        containers.refill();
                        coffee(3);

                    }
                    else if (containers.sugerCount == 0)
                    {
                        string msg = ("Refilling Sugar");
                        MessageBox.Show(msg);
                        containers.refill();
                        coffee(3);
                    }
                }
            }
            //Coffee
            else
            {
                if (containers.coffeePuderCount > 0 && containers.waterContainerCount > 0 &&
                    containers.coffeeGroundsCount < MAX)
                {
                    containers.coffeePuderCount = decres;
                    containers.waterContainerCount = decres;
                    containers.coffeeGroundsCount = add;
                    logTest.logCoffeeCount = add;
                }
                else
                {
                    if (containers.waterContainerCount == 0)
                    {
                        containers.refillWater();
                        coffee(4);

                    }
                    else if (containers.coffeeGroundsCount == MAX)
                    {
                        containers.EmtyCoffeeGrounds();
                        coffee(4);

                    }
                    else if (containers.coffeePuderCount == 0)
                    {
                        string msg = ("Refilling coffee puder");
                        MessageBox.Show(msg);
                        containers.refill();
                        coffee(4);
                    }
                }
            }
        }
        //Cafe au lait
        public void cafeAuLait()
        {
            Console.WriteLine("coffe water: " + containers.waterContainerCount);
            Console.WriteLine("coffe grounds: "+containers.coffeeGroundsCount);
            Console.WriteLine("coffe puder: "+containers.coffeePuderCount);
            if (containers.coffeePuderCount > 0 && containers.milkCount >= 1 && containers.waterContainerCount >= 1 &&    //test
                    containers.coffeeGroundsCount < MAX)
            {
                
                containers.coffeePuderCount = decres; //test
                containers.waterContainerCount = 0.5;
                containers.coffeeGroundsCount = add;
                containers.milkCount = 0.5; //test
                logTest.logCafeAuLaitCount = add;
            }
            else
            {
                if (containers.waterContainerCount <= 1)
                {
                    containers.refillWater();
                    cafeAuLait();

                }
                else if (containers.coffeeGroundsCount == MAX)
                {
                    containers.EmtyCoffeeGrounds();
                    cafeAuLait();

                }
                else if (containers.coffeePuderCount <= 0)  //test
                {
                    string msg = ("Refilling coffee puder");
                    MessageBox.Show(msg);
                    containers.refill();
                    cafeAuLait();

                }
                else if (containers.milkCount <= 1)     //test
                {
                    string msg = ("Refilling milk");
                    MessageBox.Show(msg);
                    containers.refill();
                    cafeAuLait();
                }
            }
        }
        //Hot Choclate
        public void hotChocolate()
        {
            if (containers.chocolatePuderCunt > 0 && containers.waterContainerCount > 0)
            {
                containers.waterContainerCount = decres;
                containers.chocolatePuderCunt = decres;
                logTest.logHotChocolateCount = add;
                logTest.logTeeWaterCount = add;
            }
            else
            {
                if (containers.waterContainerCount <= 0)
                {
                    containers.refillWater();
                    hotChocolate();

                }
                else if (containers.chocolatePuderCunt <= 0)
                {
                    string msg = ("Refilling chocolate puder");
                    MessageBox.Show(msg);
                    containers.refill();
                    hotChocolate();
                }
            }
        }
        //Tee water
        public void teeWater()
        {
            if (containers.waterContainerCount > 0)
            {
                containers.waterContainerCount = decres;
                logTest.logTeeWaterCount = add;
            }
            else
            {
                if (containers.waterContainerCount <= 0)
                {
                    containers.refillWater();
                    teeWater();
                }
            }
        }
        //Water
        public void water()
        {
            logTest.logWaterCount = add;
        }
        public void carbonatedWater()
        {

            if (containers.carbonatedCount > 0)
            {
                containers.carbonatedCount = decres;
                logTest.logCarbonatedCount = add;
                logTest.logWaterCount = add;
            }
            else
            {
                string msg = ("Switching Carbornat container");
                MessageBox.Show(msg);
                containers.refill();
                carbonatedWater();
            }

        }
        
        //av någon anledning så funkar inte containers refill när man kallar dem från refill knaparna men det funkar så här :s
        //emty coffeeGrounds
        public void EmtyCoffeeGrounds()
        {
            containers.EmtyCoffeeGrounds();
 
        }
        //Refill
        public void refill()
        {
            containers.refill();
     
        }
        //log
        public string Log()
        {
            string coffe = logTest.logCoffeeCount.ToString() + "st";
            string milk = logTest.logMilkCount.ToString() + "st";
            string sugar = logTest.logSugarCount.ToString() + "st";
            string cafeAuLait = logTest.logCafeAuLaitCount.ToString() + "st";
            string hotChocolate = logTest.logHotChocolateCount.ToString() + "st";
            string teeWater = logTest.logTeeWaterCount.ToString() + "st";
            string carbonated = logTest.logCarbonatedCount.ToString() + "st";
            string water = logTest.logWaterCount.ToString() + "st";

            string completLog = coffe + "\n" +
                                milk + "\n" +
                                sugar + "\n" +
                                cafeAuLait + "\n" +
                                hotChocolate + "\n" +
                                teeWater + "\n" +
                                carbonated + "\n" +
                                water + "\n";
            return completLog;
        }
        //bill
        public string bill()
        {
            string total;
            double monthlyFee = 1000.0;
            double coffeeFee = 1.60 * logTest.logCoffeeCount;
            double milkFee = 0.20 * logTest.logMilkCount;
            double sugarFee = 0.10 * logTest.logSugarCount;
            double cafeAuLithFee = 2.0 * logTest.logCafeAuLaitCount;
            double chocolateFee = 1.40 * logTest.logHotChocolateCount;
            double carbonateFee = 1.60 * logTest.logCarbonatedCount;
            double totaleBill = monthlyFee + coffeeFee + milkFee + sugarFee + cafeAuLithFee + chocolateFee + carbonateFee;

            total = totaleBill.ToString() + "kr";
            return total;
        }
    }
}