using System;

namespace Two
{
    class Program
    {
        static void Main(string[] args)
        {
            int[,] a = new int[3, 5];
            int k = 0;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    k++;
                    a[i, j] = k;
                }
            }
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    Console.Write(" {0} ",a[i, j]);
                }
                Console.WriteLine();
            }
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 5; j++)
                    Console.WriteLine("{0},{1} : {2}", i, j, a[i, j]);
                Console.WriteLine();
            }
        }
    }
}