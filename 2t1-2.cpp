#include <iostream>
using namespace std;
void ada(double a[] ,int size ) {
	bool changed = true;
	do
	{
		changed = false;//��ʼֵ��Ϊfalse
		for (int j = 0; j < 9; j++)
			if (a[j] > a[j + 1])
			{
				int help;
				help = a[j];
				a[j] = a[j + 1];
				a[j + 1] = help;
				changed = true;
			}//һ������һ�ε�����������������֮ǰ������������Ҫ���������ɣ���Ҫ��changedֵ��Ϊtrue���ڴ�ִ�м�������ѭ��
	} while (changed==true);//����ִ������changedֵΪtrue
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << ' ';//�������������������
	}
}
int main() {
	double fin[10];
	cout << "������10��˫����������Ϊһ�����飬�����򽫵��ú��������������������������" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> fin[i];
	}	//��������
	cout << "������������������Ϊ:"<<' ';
	ada(fin, 10);	//����ada������������������������������
	return 0;
}