#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long aFunc(int n){
        if (n <= 1) return 1;
        else return aFunc(n - 1) + aFunc(n - 2);
    }
}