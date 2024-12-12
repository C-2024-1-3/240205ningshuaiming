#include <iostream>
using namespace std;
int outside1(int& a, int& b)//定义外部函数，用来求传入数值的最大公因数
{
	int min2;
	if (a > b)
	{
		min2 = b;
	}
	else if (a < b)
	{
		min2 = a;
	}
	else
	{
		min2 = a;
	}//利用if条件判断取得传入数据的最小值
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
	return min2;
}
int main()
{
	int min1, m, n;
	cout << "请输入两个自然数，本程序可以利用函数求得这两个数的最大公因数，并在主函数中输出" << endl;
	cin >> m >> n;//在主函数中进行输入
	min1=outside1(m, n);//调用外部函数求出最大公因数并返还给min1
	cout << "最大公因数为" << min1 << endl;//在主函数中进行输出
	return 0;
}