//时间复杂度：O(N^2log5N)

#include <iostream>
#include <iomanip> // 用于设置输出格式

using namespace std;

void fun(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            int k = 1;
            while(k <= n) {
                cout << "Addresses of variables: " << endl;
                cout << "i: " << &i << endl;
                cout << "j: " << &j << endl;
                cout << "k: " << &k << endl;
                
                cout << "Values of variables: " << endl;
                cout << "i: " << i << ", j: " << j << ", k: " << k << endl;
                
                k = k * 5; // 更新 k 以避免无限循环
            }
        }
    }
}

int main() {
    fun(5);
    return 0;
}



