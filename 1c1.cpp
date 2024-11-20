#include <iostream>
using namespace std;
int main()
{
	int k;//此处应进行k的初始化
	cin >> k;//此处应给给k赋值
	int i = k + 1;
	cout << ++i << endl;//此处若为i++，输出的仍为原来的i值。若想输出数值加1后的i值此处应为++i
	i = 1;//此处不能加int,否则发生i的重定义
	cout << ++i << endl;//此处若为i++，输出的仍为原来的i值，即1。若想输出数值加1后的i值，即2，此处应为++i
	cout << "Welcome to C++" << endl;
	return 0;
}