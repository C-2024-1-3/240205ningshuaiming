#include <iostream>
using namespace std;
void ada(double a[] ,int size ) {
	bool changed = true;
	do
	{
		changed = false;//初始值设为false
		for (int j = 0; j < 9; j++)
			if (a[j] > a[j + 1])
			{
				int help;
				help = a[j];
				a[j] = a[j + 1];
				a[j + 1] = help;
				changed = true;
			}//一旦发生一次调换，调换的两个数之前的数就有了需要调换的嫌疑，需要把changed值设为true，在此执行检索调换循环
	} while (changed==true);//函数执行条件changed值为true
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << ' ';//将起泡排序后的数组输出
	}
}
int main() {
	double fin[10];
	cout << "请输入10个双精度数字作为一个数组，本程序将调用函数把这个数组进行起泡排序并输出" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> fin[i];
	}	//输入数组
	cout << "进行起泡排序后的数组为:"<<' ';
	ada(fin, 10);	//调用ada（）函数，对数组进行起泡排序并输出
	return 0;
}