#include <iostream>
using namespace std;
int main()
{
	double i, d, m, x;//定义双精度浮点数i,d,m,x。i表示当天买的苹果数，d用于记天数，m表示直到当天共花的钱数，x表示平均花费
	for (i = 2, m = 0, d = 0; i <= 100; i = 2 * i)//利用for循环，只要苹果数不超过100，便不断求得共花的钱数，推进天数。直到购买的苹果数超过100，退出循环，不再记天数和钱数
	{
		m = m + 0.8 * i;
		d = d++;
	}
	x = m / d;//计算平均花费并赋值给x
	cout << "平均每天花" << x << "元" << endl;//输出平均花费x
	return 0;
}