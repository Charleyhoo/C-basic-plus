#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    static int Fibonacci(int n){
        if (n <= 1)
            return n;
        int[, ] f = {{1, 1}, {1, 0}};
        Power(f, n - 1);
        return f[0, 0];
    }

    static void Power(int[, ] f, int n){
        if (n <= 1)
            return;
        int[, ] m = {{1, 1}, {1, 0}};
        Power(f, n / 2);
        Multiply(f, f);
        if (n % 2 != 0)
            Multiply(f, m);
    }

    static void Multiply(int[, ] f, int[, ] m){
        int x = f[0, 0] * m[0, 0] + f[0, 1] * m[1, 0];
        int y = f[0, 0] * m[0, 1] + f[0, 1] * m[1, 1];
        int z = f[1, 0] * m[0, 0] + f[1, 1] * m[1, 0];
        int w = f[1, 0] * m[0, 1] + f[1, 1] * m[1, 1];
        f[0, 0] = x;
        f[0, 1] = y;
        f[1, 0] = z;
        f[1, 1] = w;
    }
}