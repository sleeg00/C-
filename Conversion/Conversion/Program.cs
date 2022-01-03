using System;

namespace Conversion
{
    class Program
    {
        static void Main(string[] args)
        {
            string s = "50000";
            int n;
            n = Convert.ToInt32(s); //명시적 형 변환
            Console.WriteLine("{0}", s);
            Console.WriteLine("{0}", n);
        }
    }
}