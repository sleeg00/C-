using System;

namespace baekjoon1729
{
    class Program
    {
        static void Main(string[] args)
        {
            int[,] a = new int[10,10];
            for(int i=0; i<3; i++)
            { 
                for(int j=0; j<6; j++)
                {
                    string input=Console.ReadLine();
                    int k=Convert.ToInt32(input);
                    a[i, j] = k;
                }
            }
               
            for(int i=0; i<3; i++)
            {
                for(int j=0; j<6; j++)
                    Console.Write(a[i,j]);
                Console.WriteLine();
            }
                
        }
    }
}