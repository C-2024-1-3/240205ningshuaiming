#include <iostream>
using namespace std;
#include "mytriangle.h"//包含头文件mytriangle.h
int main() {
	double a, b, c;
	cout << "请输入三角形的三条边，本程序能为你计算这个三角形的面积" << endl;
	cin >> a >> b >> c;
	if (is_valid(a, b, c) == 1) {			//调用is_valid函数判断是否能构成三角形
		cout << "你所输入的三条边能构成三角形，该三角形的面积为" << area(a, b, c) << endl;	//调用area函数求三角形面积
	}
	else {
		cout << "你所输入的三条边不能构成三角形" << endl;
	}
	return 0;
}
