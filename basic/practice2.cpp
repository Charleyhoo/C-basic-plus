#ifndef FindStudent_H
#define FindStudent_H

#include <iostream>
#include <cstring>

using namespace std;

struct Student
{
    string name;
    string num;
    /* data */
};
#define N 6 //注意不要打分号，打了分号就是直接定义？
void InputStudentInfo(Student* s){
    for (int i = 0; i < N; i++){
        cout << "第" << i+1 << "个学生的姓名和学号：" << endl;
        cin >> s[i].name >> s[i].num;
    }
}

void findStudent(Student* s, string searchName){
    bool find = false; //为什么要定义为false？ ---> 因为一开始定义为false，则遍历去寻找学生，找到了就改成true，就输出
    for (int i = 0; i < N; i++){
        if (s[i].name == searchName){
            cout << "学生信息：" << endl;
            cout << "姓名: " << s[i].name << endl;
            cout << "学号: " << s[i].num << endl;
            find = true;
            break; // 找到学生后，退出循环
        }
    }
    if(!find) cout << "找不到" << endl;

}


int main(){
    Student student[N];
    InputStudentInfo(student); //输入学生信息
    //开始查找
    string searchName;
    cout << "想查找的学生：" << endl;
    cin >> searchName;
    findStudent(student, searchName);
    return 0;
}

#endif