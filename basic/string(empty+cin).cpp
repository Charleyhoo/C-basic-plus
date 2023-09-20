#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main()
{
	string s1;
	cin >> s1;
	cout << s1 << endl; //cin无法输入空格 如果输入有空格 只拿到空格之前的
	string s = " ";
	cout<<s.empty()<<endl;//0：空格算一个字符，所以这里不是空字符串
	string s2 = "";
	cout<<s2.empty()<<endl;//1  
	string s3 = "hello world";  
	cout<<s3.size()<<endl;//11  
	cout<<sizeof(s3)<<endl;//24  和字符串有多长无关  string类型中只有一个成员变量char*
}
/*
使用 sizeof(s3) 来获取字符串对象 s3 的大小。
这里的大小是对象的大小，与字符串的长度无关。
在这个示例中，sizeof(s3) 返回 24，这是因为 std::string 对象通常包含一个指向字符串数据的指针以及其他一些元数据，
而这些元数据占用了一些额外的空间，因此对象的大小是 4 个字节。
不过要注意，sizeof 返回的大小是编译时决定的，与字符串的内容和长度无关。
*/