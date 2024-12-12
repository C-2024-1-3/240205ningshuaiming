#include<iostream>
#include<cmath>//包含头文件cmath，便于后续开方计算
#include"mytriangle.h"//包含头文件mytriangle.h
using namespace std;
bool is_valid(double side1, double side2, double side3) {
	if (side1 + side2 > side3 && side2 + side3 > side1)
	{
		return true;
	}
	else {
		return false;
	}
}//函数的定义
double area(double side1, double side2, double side3) {
	double s = (side1 + side2 + side3) / 2, squ = sqrt(s * (s - side1) * (s - side2) * (s - side3));
	return squ;
}//函数的定义