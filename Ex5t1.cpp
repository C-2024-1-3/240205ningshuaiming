#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:           // �����ݳ�Ա����Ȩ�޸�Ϊ˽��
	int hour;
	int minute;
	int sec;
public:
	void inp() {
		cin >> hour;      
		cin >> minute;
		cin >> sec;
	}		//�������ڶ�����������ĳ�Ա����
	void outp() {
		cout << hour << ":" << minute << ":" << sec << endl;
	}		//�������ڶ�����������ĳ�Ա����
};
int main()
{
	Time t1;           //����t1ΪTime�����
	t1.inp();
	t1.outp();			//�����������Ĺ��ܸ�Ϊ�ɳ�Ա����ʵ�֣�
	return 0;
}
