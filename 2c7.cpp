#include <iostream>
using namespace std;
int main()
{
	int a, b;
	for (a = 1; a <= 5; a++)		//�������forѭ���Լ�a��ֵȷ��ÿ����*����������ÿ���������1���ӵ�5
	{
		for (b = 1; b <= a; b++)
		{
			cout << "*";
		}							//Ƕ���ڲ�forѭ��,ʵ��*�������ʹÿ��*������������a
		cout << endl;				//ʵ��ÿ���������
	}
	return 0;
}