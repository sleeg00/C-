using System;
using System.Net;///dns 사용

namespace DNS
{
    class Program
    {
        static void Main(string [] args)
        {
            string mycomputer = Dns.GetHostName ();
            ///Dns 이름 넣기 naver,gogle
            Console.WriteLine("computer name : " + mycomputer);

            IPHostEntry entry= Dns.GetHostEntry("www.naver.com");
            /// IPHostEnty는 int char string 변수형 Dns를 보관하기 위한
            /// GetHostEntry는 ip주소를 가져옴
            foreach(IPAddress ipAddress in entry.AddressList)///foreach는 끝날떄까지 집어넣음
            {
                ///break가 설정되있는 while?
                Console.Write("ip of www.naver.com is : ");
                Console.WriteLine(ipAddress);
            }
        }
    }
}