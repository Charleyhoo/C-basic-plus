#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int Fibonacci(int n)
    {
        if (n <= 1)
            return n;
        else
        {
            int iter1 = 0;
            int iter2 = 1;
            int f = 0;s
            for (int i = 2; i <= n; i++)
            {
                f = iter1 + iter2;
                iter1 = iter2;
                iter2 = f;
            }
            return f;
        }
    }
    return 0;
}