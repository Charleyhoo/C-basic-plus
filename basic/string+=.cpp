#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1 = "hello";
	string s2 = " world";
	s1 += s2;
	cout<<s1<<endl;
	//s1 += 1;//?不可以   string只能和string做加法

    //如果就是想把整数加到string中，在C++string类中没有好办法，还得使用sprintf
	char buf[100];
	snprintf(buf, sizeof(buf),"%s %d",s1.c_str(),1);
	cout<<buf<<endl;//hello1
}
