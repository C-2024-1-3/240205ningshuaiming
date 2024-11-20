#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65534;//定义常变量
	cout << "output in unsigned int type:" << testUnint << endl;  //unsigned int类型输出
	cout << "output in char type:!" << static_cast<char>(testUnint) << endl; //char type类型输出
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;//为什么结果为-2?:因为short 类型的取值范围为-32768~32767，65534超出32767的大小会重新从-32768开始计算，故输出结果为-2
	cout << "output in int type:" << static_cast<int>(testUnint) << endl;//int类型输出
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;//double类型输出
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;//double类型输出，整数位加小数位共保留4位，科学计数法格式
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16进制输出
	cout << "output in Oct unsigned int type:" << oct << testUnint << endl;//8进制输出
	system("pause");
	return 0;
}