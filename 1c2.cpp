#include <iostream>
using namespace std;
int main()
{
	const double p = 3.14;//����Բ����
	double a, b, v, s;//�ֱ������뾶��׶�ߡ�������������
	cout << "Բ����Ϊp" << endl;//��ǰ������������Բ���ʷ���Ϊp
	cout << "������Բ׶����뾶" << endl;
	cin >> a;//��ֵ
	cout << "������׶��" << endl;
	cin >> b;//��ֵ
	s = p * a * a;//����������
	v = b * s / 3;//�������
	cout << "Բ׶�����Ϊ" << v << endl;
	return 0;
}