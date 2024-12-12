#include <iostream>
using namespace std;
int cal(int fin,int day)//定义fin记录桃子数，day记录天数
{
	if (day != 0)
	{
		fin = (fin + 1) * 2;//求上一天桃子数
		day = day--;//天数减一
		cal(fin, day);//利用递归重复计算
	}
	else
	{
		return fin;//返回第一天桃子数
	}
}
int main()
{
	cout << "利用递归计算，第一天猴子共摘了桃子" << cal(1, 10) << "个" << endl;
	return 0;
}