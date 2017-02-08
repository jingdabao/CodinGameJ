using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Collections;
using System.Collections.Generic;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
class Solution
{
    static void Main(string[] args)
    {
        int N = int.Parse(Console.ReadLine());
        List<int> horseStrength = new List<int>();
        for (int i = 0; i < N; i++)
        {
            int pi = int.Parse(Console.ReadLine());
            horseStrength.Add(pi);
        }
        
        horseStrength = horseStrength.OrderBy(n=>n).ToList();
        
        
        int smallestDiff = horseStrength[1]-horseStrength[0];
        
        
        for(int i = 2; i < N; i++)
        {
            
            int newDiff = horseStrength[i] - horseStrength[i-1];
            if(newDiff < smallestDiff)
            {
                smallestDiff = newDiff;
            }
        }
        
        // Write an action using Console.WriteLine()
        // To debug: Console.Error.WriteLine("Debug messages...");

        Console.WriteLine(smallestDiff);
        
    }
}