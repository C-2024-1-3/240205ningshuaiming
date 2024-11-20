#include <iostream> 
using namespace std;
int main()
{
	double x, y;//定义双精度浮点数x,y
	cout << "请输入一个大于0小于10的数x" << endl;
	cin >> x;
	if (x > 0 && x < 1)//第一个判定条件
	{
		y = 3 - (2 * x);
		cout << "y的值为" << y << endl;
	}
	else if (x >= 1 && x < 5)//第二个判定条件
	{
		y = 2 / (4 * x) + 1;
		cout << "y的值为" << y << endl;
	}
	else if (x >= 5 && x < 10)//第三个判定条件
	{
		y = x * x;
		cout << "y的值为" << y << endl;
	}
	else//第四个判定条件
	{
		cout << "你输入的数不在规定范围中" << endl;
	}
	return 0;
}