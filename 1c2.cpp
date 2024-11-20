#include <iostream>
using namespace std;
int main()
{
	const double p = 3.14;//定义圆周率
	double a, b, v, s;//分别定义底面半径、锥高、体积、底面面积
	cout << "圆周率为p" << endl;//提前声明本程序中圆周率符号为p
	cout << "请输入圆锥底面半径" << endl;
	cin >> a;//赋值
	cout << "请输入锥高" << endl;
	cin >> b;//赋值
	s = p * a * a;//计算底面面积
	v = b * s / 3;//计算体积
	cout << "圆锥的体积为" << v << endl;
	return 0;
}