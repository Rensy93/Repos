using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CoffeeMachine2._0
{
    class Log
    {
        private int _coffeCount = 0;
        private int _milkCount = 0;
        private int _SugarCount = 0;
        private int _CafeAuLaitCount = 0;
        private int _HotChocolateCount = 0;
        private int _TeeWaterCount = 0;
        private int _WaterCount = 0;
        private int _CarbonatedCount = 0;

        //coffe
        public int logCoffeeCount
        {
            get
            {
                return _coffeCount;
            }

            set
            {
                _coffeCount += value;
            }
        }
        //milk
        public int logMilkCount
        {
            get
            {
                return _milkCount;
            }
            set
            {
                _milkCount += value;
            }
        }
        //sugar
        public int logSugarCount
        {
            get
            {
                return _SugarCount;
            }
            set
            {
                _SugarCount += value;
            }
        }

        //Cafe au lith
        public int logCafeAuLaitCount
        {
            get
            {
                return _CafeAuLaitCount;
            }
            set
            {
                _CafeAuLaitCount += value;
            }
        }

        //Hot chocolate
        public int logHotChocolateCount
        {
            get
            {
                return _HotChocolateCount;
            }
            set
            {
                _HotChocolateCount += value;
            }
        }
        //Tee water

        public int logTeeWaterCount
        {
            get
            {
                return _TeeWaterCount;
            }
            set
            {
                _TeeWaterCount += value;
            }
        }
        //Water

        public int logWaterCount
        {
            get
            {
                return _WaterCount;
            }
            set
            {
                _WaterCount += value;
            }
        }
        //carbonated



        public int logCarbonatedCount
        {
            get
            {
                return _CarbonatedCount;
            }
            set
            {
                _CarbonatedCount += value;
            }

        }
    }
}
