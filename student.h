//student.h                (这是头文件，在此文件中进行类的声明)
#pragma once
using namespace std;
class Student              //类声明
{
public:                   //公用成员函数原型声明
	void display();		//声明一个用来输出的成员函数
	void set_value();	//声明一个对数据成员赋初值的成员函数
private:
	int num;
	char name[20];
	char sex;
};

