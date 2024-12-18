#include<iostream>
using namespace std;
class Point {
private:
	double x;
	double y;	//定义私有变量x,y
public:
	Point(double a,double b) {
		x = a;
		y = b;
	}		//定义有参构造函数
	void setPoint(int i, int j) {
		x = x + i;
		y = y + j;
	}	//定义公有成员函数void setPoint(int i, int j)
	void display() {
		cout << "修改后的坐标值为：(" << x << "，" << y << ")" << endl;
	}		//定义公有成员函数display()输出修改后的坐标值
};
int main() {
	Point point1(60, 80);
	point1.setPoint(3, 7);
	point1.display();
	return 0;
}		//主函数中通过定义对象，验证各个函数