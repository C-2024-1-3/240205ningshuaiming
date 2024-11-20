#include <iostream> 
using namespace std;
int main()
{
	cout << "char lenth:" << sizeof(char) << endl;//输出char类型的的长度
	cout << "int lenth:" << sizeof(int) << endl;//输出int类型的的长度
	cout << "float lenth:" << sizeof(float) << endl;//输出float类型的的长度
	cout << "double lenth:" << sizeof(double) << endl;//输出double类型的的长度
	cout << "short lenth:" << sizeof(short) << endl;//输出short类型的的长度
	cout << "long lenth:" << sizeof(long) << endl;//输出long类型的的长度
	cout << "long long lenth:" << sizeof(long long) << endl;//输出long long类型的的长度
	cout << "long double lenth:" << sizeof(long double) << endl;//输出long double类型的的长度
	cout << "bool lenth:" << sizeof(bool) << endl;//输出bool类型的的长度
	return 0;
}