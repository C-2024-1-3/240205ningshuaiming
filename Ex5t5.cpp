#include<iostream>
using namespace std;
class Point {
private:
	double x;
	double y;	//����˽�б���x,y
public:
	Point(double a,double b) {
		x = a;
		y = b;
	}		//�����вι��캯��
	void setPoint(int i, int j) {
		x = x + i;
		y = y + j;
	}	//���幫�г�Ա����void setPoint(int i, int j)
	void display() {
		cout << "�޸ĺ������ֵΪ��(" << x << "��" << y << ")" << endl;
	}		//���幫�г�Ա����display()����޸ĺ������ֵ
};
int main() {
	Point point1(60, 80);
	point1.setPoint(3, 7);
	point1.display();
	return 0;
}		//��������ͨ�����������֤��������