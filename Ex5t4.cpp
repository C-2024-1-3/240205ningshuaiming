#include <iostream>
using namespace std;
class Student {
	friend void max(Student* find);
private:
	int num;
	double grade;
public:

	void inp() {
		cout << "�������ѧ����ѧ�źͳɼ�" << endl;
		cin >> num >> grade;
	}
};
void max(Student*find){		//����һ������max����ָ������ָ������������
	bool help = false;
	do {
		
		help = true;
		for (int i = 0; i < 4; i++) {
			if ((find+i)->grade<(find+i+1)->grade) {
				help = false;
				Student mid;
				mid = *(find + i);
				*(find + i) = *(find + i + 1);
				*(find + i + 1) = mid;

			}
		}
	} while (help == false);			//������������ķ������ɼ�����ߵ����ݷ���ԭ��������ĵ�һλ����findָ����ָ���λ��
	cout << "�ɼ�����ߵ�ѧ��Ϊ:" << find->num << endl;		//����findָ�������ɼ�����ߵ�ѧ��
}
int main() {
	cout << "��������������ѧ����ѧ�źͳɼ�" << endl;
	Student s1, s2, s3, s4, s5;		//�������Student�����
	s1.inp();
	s2.inp();
	s3.inp();
	s4.inp();
	s5.inp();		//Ϊ��������еĳ�Ա���Ը�ֵ
	Student gro[5] = { s1,s2,s3,s4,s5 };		//����һ���������飬�ڷ�֮ǰ�������������
	max(gro);		//����max�����ҳ�5��ѧ������߳ɼ��ߣ��������ѧ��
	return 0;
}