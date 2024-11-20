#include <iostream> 
using namespace std;
int main()
{
	int a, b, c, d;//定义四个整形变量
	cout << "请输入两个数，本程序可以计算其最大公约数和最小公倍数" << endl;//声明程序功能
	cin >> a;
	cin >> b;//输入两个数
	if (a > b)
	{
		c = b;
	}
	else if (a == b)
	{
		c = a;
	}
	else
	{
		c = a;
	}//取得a,b中的较小值，并赋值给c
	for (; c <= a && c <= b;)//因为最大公因数一定小于等于两个数中的较小值，即小于等于c,利用for循环，令c不断减1
	{
		if (a % c == 0 && b % c == 0)
		{
			break;
		}//直到a、b均能整除c,退出循环
		else
		{
			c = c--;
		}//否则继续令c减1
	}
	cout << "这两个数的最大公因数为" << c << endl;//最终c的值即为两个数的最大公因数

	if (a > b)
	{
		d = a;
	}
	else if (a == b)
	{
		d = a;
	}
	else
	{
		d = b;
	}//取a、b中的较大值，并赋值给d
	for (; a <= d && b <= d;)//因为最小公倍数一定大于等于两个数中的较大值，即大于等于d,利用for循环，令d不断加1
	{
		if (d % a == 0 && d % b == 0)
		{
			break;
		}//直到c能够整除a和b，退出循环
		else
		{
			d = d++;
		}//否则继续令d加1
	}
	cout << "这两个数的最小公倍数为" << d << endl;//最终的d值即为两个数的最小公倍数
	return 0;
}