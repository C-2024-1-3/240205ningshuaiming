#include <iostream> 
using namespace std;
int main()
{
	double x, y;//����˫���ȸ�����x,y
	cout << "������һ������0С��10����x" << endl;
	cin >> x;
	if (x > 0 && x < 1)//��һ���ж�����
	{
		y = 3 - (2 * x);
		cout << "y��ֵΪ" << y << endl;
	}
	else if (x >= 1 && x < 5)//�ڶ����ж�����
	{
		y = 2 / (4 * x) + 1;
		cout << "y��ֵΪ" << y << endl;
	}
	else if (x >= 5 && x < 10)//�������ж�����
	{
		y = x * x;
		cout << "y��ֵΪ" << y << endl;
	}
	else//���ĸ��ж�����
	{
		cout << "������������ڹ涨��Χ��" << endl;
	}
	return 0;
}