#include <iostream>
using namespace std;
void outside1(int& a, int& b)//�����ⲿ����������������ֵ�������������С�����������������ò������ܴ����ʵ��
{
	int max2, min2;
	if (a > b)
	{
		max2 = a;
		min2 = b;
	}
	else if (a < b)
	{
		max2 = b;
		min2 = a;
	}
	else
	{
		max2 = a;
		min2 = a;
	}//����if�����ж�ȡ�ô������ݵ����ֵ����Сֵ
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
	for (;max2>= a && max2 >= b;)
	{
		if (max2%a == 0 && max2%b == 0)
		{
			break;
		}
		else
		{
			max2++;
		}
	}//����forѭ������С������
	cout << "�������ò���������������������Ϊ:" << min2 << endl;
	cout << "�������ò����������������С������Ϊ:" << max2 << endl;	//���
	
}
int main()
{
	int min1, m, n;
	cout << "������������Ȼ������������������������������������������������������ò���������������������������С������" << endl;
	cin >> m >> n;
	outside1(m, n);//�����ⲿ������������������С������
	return 0;
}