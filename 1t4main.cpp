#include <iostream>
using namespace std;
#include "mytriangle.h"//����ͷ�ļ�mytriangle.h
int main() {
	double a, b, c;
	cout << "�����������ε������ߣ���������Ϊ�������������ε����" << endl;
	cin >> a >> b >> c;
	if (is_valid(a, b, c) == 1) {			//����is_valid�����ж��Ƿ��ܹ���������
		cout << "����������������ܹ��������Σ��������ε����Ϊ" << area(a, b, c) << endl;	//����area���������������
	}
	else {
		cout << "��������������߲��ܹ���������" << endl;
	}
	return 0;
}
