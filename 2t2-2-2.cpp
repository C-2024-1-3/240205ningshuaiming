#include <iostream>
#include <stdlib.h>		//引入<stdlib.h>头文件，便于后续使用strtol（）函数将字符串形式表示的一个16进制数转换为10进制数
#include <vector>
using namespace std;
int parseHex(const char* const hexString) {
	char* endfin;
	long calc = strtol(hexString, &endfin, 16);		//使用strtol（）函数将字符串形式表示的一个16进制数转换为10进制数
	if (*endfin != '\0') {		//如果*endfin != '\0'，说明输入的字符串中有不属于16进制数的字符，无法进行转换，输入非法
		cout << "your input string is illegal" << endl;
		return -1;
	}
	cout << "转换结果为" << calc << endl;
	return 0;


}
int main() {
	cout << "请输入一个正确的字符串，本程序可以将字符串形式表示的一个16进制数转换为10进制数并输出" << endl;
	vector <char> inp;		//创建vector型数组
	char mid;
	while (mid = cin.get()) {
		if (mid != '\n') {
			inp.push_back(mid);
		}
		else {
			inp.push_back('\0');
				break;
		}
	}		//输入 数组
	int size = inp.size();		//利用size（）函数获取数组长度
	char* finbef = new char[size];
	for (int i = 0; i < size; i++) {
		finbef[i] = inp[i];
	}	//将vector型数组转化为普通型数组
	const char* const fin = finbef;	//将数组中的元素转化为const型，便于调用函数
	parseHex(fin);		//调用函数
	return 0;

}