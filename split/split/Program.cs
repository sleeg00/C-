using System;

namespace split
{
    class Program
    {
        static void Main(string[] args)
        {
			int max = 3;
			int[,] a = new int[max, max];
			string s;
			int i = 0;
			while ((s = Console.ReadLine()) != null)
			{
				string[] split = s.Split(" "); /// Split이란 ("ex")ex를 제외해줌 예외처리
				///split배열에 증가 결국 1차원베열에 넣어서 2차원배열에 넣는다
				for (int j = 0; j < split.Length; ++j)
					a[i, j] = int.Parse(split[j]);
				if (++i == max)
					break;
			}
		}
    }
}