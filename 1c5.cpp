#include <iostream> 
#include <iomanip>
using namespace std;
int main()
{
	double a, b;//����double���ͱ���
	cout << "�����뻪���¶�:" << endl;
	cin >> a;//Ϊa��ֵ
	b = (a - 32) / 1.8;//�������¶�ֵת��Ϊ�����¶Ȳ���ֵ��b
	cout << "��Ӧ�������¶�Ϊ:" <<fixed<< setprecision(2) << b << endl;//��b������λС�����
	return 0;
}