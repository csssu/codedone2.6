using System;
/**
 * @file ProblemTwo.cs
 * @author Amir khaksar (ah_khaksar@yahoo.com)
 * @brief count letters
 * @version 0.1.0
 * @date 2022-09-09
 * @id 2code2
 * @Compailer dot net
 * @copyright Copyright (c) 2022
 *
 */
namespace Sixth_Week
{
    class Program
    {
        private static void Main(string[] args)
        {
            int V = Convert.ToInt16(Console.ReadLine());
            int E = Convert.ToInt16(Console.ReadLine());

            for (int i = 0; i < E; i++)
            {
                int src = Convert.ToInt16(Console.ReadLine());
                int dest = Convert.ToInt16(Console.ReadLine());
            }
            Console.WriteLine((V < E ? 0 : 1));
        }
    }
}
