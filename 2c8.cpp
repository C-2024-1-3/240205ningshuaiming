#include <iostream>
#include <cstdlib>//引入头文件<cstdlib>
using namespace std;
int main()
{
	double a, xn, xn1, t, t1;//定义双精度浮点数a, xn, xn1, t, t1
	cout << "本程序可以计算你所输入的数a的平方根" << endl;//声明程序的功能
	cout << "请输入一个数a" << endl;
	cin >> a;//输入一个值，赋给a
	if (a >= 0)//如果a的值大于等于0，则可计算平方根
	{
		xn = a;//令xn的值等于a
		xn1 = (xn + a / xn);//利用题中所给公式，第一次算出xn1的值
		t = xn1 - xn;
		t1 = abs(t);//利用abs（）函数，算出t的绝对值并赋值给t1，t1即为此时的精度
		for (; t1 >= 1e-5;)//根据题中要求，利用for循环，若精度仍大于1e-5,就把xn1的值赋给xn，并再次执行题中公式，并计算精度。直到精度小于1e-5,则退出循环
		{
			xn = xn1;
			xn1 = (xn + a / xn) / 2;
			t = xn1 - xn;
			t1 = abs(t);


		}
		cout << "平方根为" << xn1 << endl;//根据题中所给信息，最终得到的xn1的值即为输入值的平方根
	}
	else
	{
		cout << "你所输入的数为负数，无法计算平方根" << endl;
	}//若a的值为负，则无法计算平方根
	return 0;
}