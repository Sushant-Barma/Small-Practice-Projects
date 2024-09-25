using System;

namespace Code
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("A Simple Program to find whether the given number by user is an Armstrong Number or not\n");

            int n, t, rem, sum = 0;

            Console.Write("Enter a number: ");
            n = Convert.ToInt32(Console.ReadLine());
            t = n;
            Console.WriteLine();

            while(n != 0)
            {
                rem = n % 10;
                sum += (int)(Math.Pow(rem, 3));
                n /= 10;
            }

            Console.WriteLine($"Result: {sum}\n");

            if(t == sum)
            {
                Console.WriteLine($"The given number: {t} is an Armstrong Number!");
            }
            else
            {
                Console.WriteLine($"The given number: {t} is not an Armstrong Number!");
            }

            Console.ReadKey();
        }
    }
}