#include <iostream>
using namespace std;
int main()
{
	int a, b;
	for (a = 1; a <= 5; a++)		//利用外层for循环以及a的值确定每层中*的数量，是每层的数量由1增加到5
	{
		for (b = 1; b <= a; b++)
		{
			cout << "*";
		}							//嵌套内层for循环,实现*的输出，使每行*的数量不超过a
		cout << endl;				//实现每层结束换行
	}
	return 0;
}