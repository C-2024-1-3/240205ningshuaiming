#include <iostream> 
using namespace std;
int main()
{
	double a, b, c, d;//定义双精度浮点数变量a,b,c,d
	cout << "请输入三角形的三边长" << endl;
	cin >> a;
	cin >> b;
	cin >> c;//输入三角形的三边长并分别赋值给a,b,c
	if (a + b > c && a + c > b)//三角形的两边之和大于第三边
	{
		if (a == b || a == c || b == c)//利用或运算符，判定只要有两边相等的三角形即为等腰三角形
		{
			d = a + b + c;//求三角形周长
			cout << "该三角形是等腰三角形，其周长为" << d << endl;
		}
		else//若没有任何两边相等，则该三角形不是等腰三角形
		{
			d = a + b + c;//求三角形周长
			cout << "该三角形不是等腰三角形，其周长为" << d << endl;
		}
	}
	else//不满足两边之和大于第三边，则输入的的三边长无法构成三角形
	{
		cout << "这样的三边长无法构成三角形" << endl;
	}
}