#include<iostream>

using namespace std;

int main()
{
	bool b1;
	b1 = 10;
    //正常情况下输出bool类型的值就是0  1
	cout<<b1<<endl;	
	bool b2;
	b2 = -23;
	cout<<b2<<endl;	 
	bool b5;
	b5 = 0;
	cout<<b5<<endl;  
	bool b3;
	b3 = true;   //'1'   //false会被转换为0，而true会被转换为1
	cout<<b3<<endl;	    
	bool b4;
	b4 = false;    //'0'
	cout<<b4<<endl;	
	cout<<sizeof(b4)<<endl;	//1字节
    //bool 类型有多大？
    //A 1字节
    //B 2字节
    //C 至多1字节
	//...
}
