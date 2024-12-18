#include <iostream>
using namespace std;
class cub {
private:
	 double length;
	 double width;
	 double height;
	 double V;		//定义数据成员
public:
	void inp() {
		cout << "请由键盘输入此长方柱的长、宽、高" << endl;
		cin >> length >> width >> height;
	}		//定义用来输入长方柱长、宽、高的成员函数
	void culc() {
		V = length * width * height;
	}		//定义计算长方柱体积的成员函数
	void outp() {
		cout << "该长方柱的体积为：" << V << endl;
	}		//定义输出长方柱的体积的成员函数
};
int main() {
	cub c1, c2, c3;		//创建三个cub类对象
	c1.inp();
	c1.culc();
	c1.outp();
	c2.inp();
	c2.culc();
	c2.outp();
	c3.inp();
	c3.culc();
	c3.outp();		//利用成员函数实现题目要求的功能
	return 0;

}