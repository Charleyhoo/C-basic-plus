#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void fun(int n) {
    auto start = chrono::high_resolution_clock::now();
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            int k = 1;
            cout << "Value and Addresses of variables: " << endl;
                cout << "i: " << i << " &i: " << &i << endl;
                cout << "j: " << j << " &j: " << &j << endl;
                cout << "k: " << k << " &k: " << &k << endl;                
            while(k <= n) {
                k = k * 5;
            }
        }
    }
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start).count();
    cout << "Thread ID: " << this_thread::get_id() << " Time taken: " << duration << " milliseconds" << endl;
}

int main() {
    thread t1(fun, 5);
    t1.join();
    return 0;
}


//请注意，由于这个例子中 fun 函数是在一个单独的线程 t1 中运行的，因此打印出的线程 ID 将会始终相同。如果你在多个线程中运行 fun 函数，那么你会看到不同的线程 ID。
/*
要查看程序的 CPU 线程占用，你可以使用一些操作系统提供的工具和API。
不过，这通常涉及到系统编程，需要使用更底层的编程语言特性和库，例如在 Linux 系统下，你可以使用 pthreads 和 proc 文件系统
*/
