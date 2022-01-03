using System;

namespace 구구단
{
    class Program
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();
            int number=Convert.ToInt32(input);
            for(int i = 1; i < 10; i++)
            {
                Console.WriteLine("{0} * {1} = {2}", number, i, number*i);
            }
        }
    }
}