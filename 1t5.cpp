#include <iostream>
using namespace std;
int cal(int fin,int day)//����fin��¼��������day��¼����
{
	if (day != 0)
	{
		fin = (fin + 1) * 2;//����һ��������
		day = day--;//������һ
		cal(fin, day);//���õݹ��ظ�����
	}
	else
	{
		return fin;//���ص�һ��������
	}
}
int main()
{
	cout << "���õݹ���㣬��һ����ӹ�ժ������" << cal(1, 10) << "��" << endl;
	return 0;
}