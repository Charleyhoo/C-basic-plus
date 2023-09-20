#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
    string name[] = {"rose", "jack", "tom"};
    srand(time(0)); //初始化随机种子
    int randomname = rand()%3;      //0-2选一个
    cout << name[randomname] << endl;
}