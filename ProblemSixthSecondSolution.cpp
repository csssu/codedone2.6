/**
 * @file ProblemSixthSecondSolution.cpp
 * @author mahdi
 * @brief check if graph has cycle
 * @version 0.1.0
 * @date 2022-09-09
 * @id 2code6
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
using namespace std;

int main()
{
    int N;
    int S;
    cin >> N >> S;

    for (int i = 0; i < S; i++)
    {
        int src;
        int dest;

        cin >> src >> dest;
    }

    cout << ((N > S) ? 0 : 1);
}