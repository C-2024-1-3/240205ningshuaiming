#include <iostream>
using namespace std;
int outside1(int& a, int& b)//�����ⲿ����������������ֵ���������
{
	int min2;
	if (a > b)
	{
		min2 = b;
	}
	else if (a < b)
	{
		min2 = a;
	}
	else
	{
		min2 = a;
	}//����if�����ж�ȡ�ô������ݵ���Сֵ
	for (; min2 <= a && min2 <= b;)
	{
		if (a % min2 == 0 && b % min2 == 0)
		{
			break;
		}
		else
		{
			min2--;
		}
	}//����forѭ�����������
	return min2;
}
int main()
{
	int min1, m, n;
	cout << "������������Ȼ����������������ú����������������������������������������" << endl;
	cin >> m >> n;//���������н�������
	min1=outside1(m, n);//�����ⲿ����������������������min1
	cout << "�������Ϊ" << min1 << endl;//���������н������
	return 0;
}