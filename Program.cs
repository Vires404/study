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
            int hero_Hp = 10;
int monster_Hp = 10;
Random damage_Hero = new Random();
Random damage_Monster = new Random();
do{
    int hero_Attack = damage_Hero.Next(1,11);
    int monster_Attack = damage_Monster.Next(1,11);
    hero_Hp -= monster_Attack;
    monster_Hp -= hero_Attack;
    Console.WriteLine($"Monster was damaged and lost {hero_Attack} health and now has {monster_Hp} health.");
    Console.WriteLine($"Hero was damaged and lost {monster_Attack} health and now has {hero_Hp} health.");
    if(hero_Hp <= 0)
    {
        Console.WriteLine("monster wins");
        break;
    }
    else if(monster_Hp <= 0)
    {
        Console.WriteLine("hero wins");
        break;
    }
}while((hero_Hp>0)&&(monster_Hp>0));
        }

       
            
            
    }
    
    
    
}
