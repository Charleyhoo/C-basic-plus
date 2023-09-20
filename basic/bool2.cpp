#include <iostream>

using namespace std;

int main()
{
    bool gender = true;
    bool sex = false;

    cout << (gender ? "帅哥" : "美女") << endl;
    cout << (sex ? "帅哥" : "美女") << endl;

    cout << "gender" << boolalpha << gender << endl; // boolalpha输出true和false，需要在除数bool变量之前加  输出 true
    cout << "sex:" << sex << endl;                   // false
    bool c = true;
    cout << "c = " << noboolalpha << c << endl; // noboolalpha取消true和false的输出   输出1
}

/*
boolalpha 是C++中的一个 I/O 操纵符（manipulator），
它用于改变布尔值的文本输出格式。默认情况下，布尔值在输出时以整数形式显示，
即 true 被输出为 1，而 false 被输出为 0。
但是，当你使用 boolalpha 操纵符时，它会将布尔值以文本形式输出，即 true 或 false。
*/