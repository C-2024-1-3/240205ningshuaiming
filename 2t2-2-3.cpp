#include <iostream>
using namespace std;
double* ord( double list[],int Size) {		//定义函数，将传入的数组进行由大到小排序
	bool help = false;
	do {
		help = true;		//初始值设为false
		for (int i = 0; i < Size - 1; i++) {
			if (list[i] > list[i + 1]) {
				double swi = list[i];
				list[i] = list[i + 1];
				list[i + 1] = swi;
				help = false;
			}	//一旦发生一次调换，调换的两个数之前的数就有了需要调换的嫌疑，需要把changed值设为true，在此执行检索调换循环
		}
	} while (help == false);//函数执行条件：changed值为true
	double* ret = new double[Size]; //创建一个动态数组用来储存排序好的元素，便于在主函数中返回该数组首地址后，仍能访问该数组中的元素
	for (int i = 0; i < Size; i++) {
		ret[i] = list[i];
	}
	return ret;
}
int main() {
	int size;
	cout << "本程序可以为你建立一个动态数组，由小到大排序后用指针方式输出数组元素" << endl;
	cout << "请输入数组的长度:"<<endl;
	cin >> size;
	cout << "请输入数组（用空格对两个数进行分隔）" << endl;

	double* inp = new double[size];		//创建动态数组
		for (int i = 0; i < size; i++) {
			cin >> inp[i];
		}		//输入
		double* outp = ord(inp, size);		//调用函数
		cout << "排序后结果为：";
		for (int n = 0; n < size; n++) {
			cout << *outp<<'\ ';
			outp++;
		}		//输出
		delete[]inp, outp;		//释放动态内存
		return 0;
}
