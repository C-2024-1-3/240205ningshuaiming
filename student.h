//student.h                (����ͷ�ļ����ڴ��ļ��н����������)
#pragma once
using namespace std;
class Student              //������
{
public:                   //���ó�Ա����ԭ������
	void display();		//����һ����������ĳ�Ա����
	void set_value();	//����һ�������ݳ�Ա����ֵ�ĳ�Ա����
private:
	int num;
	char name[20];
	char sex;
};

