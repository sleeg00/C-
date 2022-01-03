using System;

namespace foreach문
{
    class Program
    {
        static void Main(string[] args) //c#에서는 기본적으로 입력받는 값을 문자로 받는다
        {
            int[] arr = { 1, 2, 5, 7, 4, 9, 8, 10, 4, 7, 11 };

            foreach (int i in arr)
                Console.WriteLine("i: {0}", i); //printd("%d %d %d")랑 같다 {0}.{1}.{2}
        }
    }
}