using System;
using System.Diagnostics;

class Program
{
    const int n = 10000;

    static void Main()
    {
        Stopwatch stopwatch = new Stopwatch();
        stopwatch.Start();

        for (int i = 0; i < n; i++)
        {
            Console.WriteLine(i);
        }

        stopwatch.Stop();
        Console.WriteLine($"Execution time: {stopwatch.Elapsed.TotalSeconds} ");
    }
}