#include <iostream>
using namespace std;
int main()
{
	int k;//�˴�Ӧ����k�ĳ�ʼ��
	cin >> k;//�˴�Ӧ����k��ֵ
	int i = k + 1;
	cout << ++i << endl;//�˴���Ϊi++���������Ϊԭ����iֵ�����������ֵ��1���iֵ�˴�ӦΪ++i
	i = 1;//�˴����ܼ�int,������i���ض���
	cout << ++i << endl;//�˴���Ϊi++���������Ϊԭ����iֵ����1�����������ֵ��1���iֵ����2���˴�ӦΪ++i
	cout << "Welcome to C++" << endl;
	return 0;
}