#include <iostream>
using namespace std;
int main() {
	double a[10];
	double te;
	int i, num;
	cout << "��������ʮ����,������������в�ͬ�����������һ�������ֶ�Σ�ֻ��ӡһ�Σ���" << endl;
	for ( i = 0,num=1; num<= 10; i++,num++)
	{
		cin >> te;
		for (int n = 0; n < i; n++)//����forѭ�����ж������������֮ǰ�����Ƿ�����ظ�
		{ 
			if (a[n] == te)
			{
				goto jump;
			}//�������ظ�����ת��jumpλ�ã����������������飬���Ǽ�����ȡ���ֶԸ�λ�ý������
		}
		a[i]=te;//���������ظ�����������������
		
		continue;
	jump:i--;
	}
	cout << "������Ϊ��"<<' ';
	for (int outp = 0; outp < i; outp++)
	{
		cout << a[outp] << ' ';//������
	}

	return 0;
}