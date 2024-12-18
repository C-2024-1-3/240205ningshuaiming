#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:           // 将数据成员访问权限改为私有
	int hour;
	int minute;
	int sec;
public:
	void inp() {
		cin >> hour;      
		cin >> minute;
		cin >> sec;
	}		//在类体内定义用来输入的成员函数
	void outp() {
		cout << hour << ":" << minute << ":" << sec << endl;
	}		//在类体内定义用来输出的成员函数
};
int main()
{
	Time t1;           //定义t1为Time类对象
	t1.inp();
	t1.outp();			//将输入和输出的功能改为由成员函数实现；
	return 0;
}
