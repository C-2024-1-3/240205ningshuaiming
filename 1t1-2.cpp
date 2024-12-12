#include <iostream>
using namespace std;
void outside1(int& a, int& b)//定义外部函数，用来求传入数值的最大公因数和最小公倍数，其中用引用参数接受传入的实参
{
	int max2, min2;
	if (a > b)
	{
		max2 = a;
		min2 = b;
	}
	else if (a < b)
	{
		max2 = b;
		min2 = a;
	}
	else
	{
		max2 = a;
		min2 = a;
	}//利用if条件判断取得传入数据的最大值和最小值
	for (; min2 <= a && min2 <= b;)
	{
		if (a % min2 == 0 && b % min2 == 0)
		{
			break;
		}
		else
		{
			min2--;
		}
	}//利用for循环求最大公因数
	for (;max2>= a && max2 >= b;)
	{
		if (max2%a == 0 && max2%b == 0)
		{
			break;
		}
		else
		{
			max2++;
		}
	}//利用for循环求最小公倍数
	cout << "利用引用参数求得两个数的最大公因数为:" << min2 << endl;
	cout << "利用引用参数求得两个数的最小公倍数为:" << max2 << endl;	//输出
	
}
int main()
{
	int min1, m, n;
	cout << "请输入两个自然数，本程序可以在主函数中求得这两个数的最大公因数，并利用引用参数求得这两个数的最大公因数和最小公倍数" << endl;
	cin >> m >> n;
	outside1(m, n);//调用外部函数输出最大公因数和最小公倍数
	return 0;
}