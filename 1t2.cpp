#include<iostream>
#include <cmath>
using namespace std;
bool is_prime(int num)//����һ���ж�һ�������Ƿ�Ϊ������bool�ͺ���
{
	for (int in = 2; in <= sqrt(num); )//����2��3����in>num�Ŀ�����˵��������������һ��������������������һ����1�Ǳ�������һ��С�ڵ������Ŀ�����������forѭ����if�����ж��Ƿ���ڴ���1��С�ڵ������Ŀ�����Χ�ڵ������������
	{
		if (num % in == 0)
		{
			return false;
			break;
		}//��������Ӧ��Χ�ڵ�����������˵������Ĳ�����������������false
		else
		{
			in++;
		}
	}
	return true;//����δ���ҵ���Ӧ��Χ�ڵ�����������Ĳ���������������true
}
int main()
{

	for (int i = 1,li=0,num=2; i <= 200;li=0 )//����num��ʼֵΪ2��ʼ����ж��ǲ���������list������¼ÿһ�е����������i������¼���������
	{
		for (; li % 10 != 0 || li == 0; )
		{
			if (is_prime(num) == 1)
			{
				cout << num<<'\ ';
				i++;
				li++;
				num++;
			}
			else
			{
				num++;

			}
			
		}
		cout << endl;
	}//����forѭ����if�жϣ�������is_prime�����������ҳ�ǰ200������������ÿ��10�����
	return 0;
}