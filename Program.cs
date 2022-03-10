using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;



namespace project
{
    class Program
    {
        static void Main()
        {
            Random coin = new Random();
            // int flip = coin.Next(0,2);
            Console.WriteLine((coin.Next(0,2) == 0)? "heads" : "tails");
            
        }
            
            
    }
    
    
    
}
