#include <iostream>
using namespace std;
class cub {
private:
	 double length;
	 double width;
	 double height;
	 double V;		//�������ݳ�Ա
public:
	void inp() {
		cout << "���ɼ�������˳������ĳ�������" << endl;
		cin >> length >> width >> height;
	}		//�����������볤�����������ߵĳ�Ա����
	void culc() {
		V = length * width * height;
	}		//������㳤��������ĳ�Ա����
	void outp() {
		cout << "�ó����������Ϊ��" << V << endl;
	}		//�������������������ĳ�Ա����
};
int main() {
	cub c1, c2, c3;		//��������cub�����
	c1.inp();
	c1.culc();
	c1.outp();
	c2.inp();
	c2.culc();
	c2.outp();
	c3.inp();
	c3.culc();
	c3.outp();		//���ó�Ա����ʵ����ĿҪ��Ĺ���
	return 0;

}