#include <iostream>
using namespace std;
int main() {
	double a[10];
	double te;
	int i, num;
	cout << "请你输入十个数,本程序将输出其中不同的数（即如果一个数出现多次，只打印一次）。" << endl;
	for ( i = 0,num=1; num<= 10; i++,num++)
	{
		cin >> te;
		for (int n = 0; n < i; n++)//利用for循环，判断新输入的数与之前的数是否存在重复
		{ 
			if (a[n] == te)
			{
				goto jump;
			}//若存在重复，跳转到jump位置，不将该数加入数组，而是继续读取数字对该位置进行填充
		}
		a[i]=te;//若不存在重复，将该数加入数组
		
		continue;
	jump:i--;
	}
	cout << "输出结果为："<<' ';
	for (int outp = 0; outp < i; outp++)
	{
		cout << a[outp] << ' ';//逐个输出
	}

	return 0;
}