#include <iostream> 
#include <iomanip>
using namespace std;
int main()
{
	double a, b;//定义double类型变量
	cout << "请输入华氏温度:" << endl;
	cin >> a;//为a赋值
	b = (a - 32) / 1.8;//将华氏温度值转换为摄氏温度并赋值给b
	cout << "对应的摄氏温度为:" <<fixed<< setprecision(2) << b << endl;//将b保留两位小数输出
	return 0;
}