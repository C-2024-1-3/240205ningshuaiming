#include <iostream>
#include <stdlib.h>		//����<stdlib.h>ͷ�ļ������ں���ʹ��strtol�����������ַ�����ʽ��ʾ��һ��16������ת��Ϊ10������
#include <vector>
using namespace std;
int parseHex(const char* const hexString) {
	char* endfin;
	long calc = strtol(hexString, &endfin, 16);		//ʹ��strtol�����������ַ�����ʽ��ʾ��һ��16������ת��Ϊ10������
	if (*endfin != '\0') {		//���*endfin != '\0'��˵��������ַ������в�����16���������ַ����޷�����ת��������Ƿ�
		cout << "your input string is illegal" << endl;
		return -1;
	}
	cout << "ת�����Ϊ" << calc << endl;
	return 0;


}
int main() {
	cout << "������һ����ȷ���ַ�������������Խ��ַ�����ʽ��ʾ��һ��16������ת��Ϊ10�����������" << endl;
	vector <char> inp;		//����vector������
	char mid;
	while (mid = cin.get()) {
		if (mid != '\n') {
			inp.push_back(mid);
		}
		else {
			inp.push_back('\0');
				break;
		}
	}		//���� ����
	int size = inp.size();		//����size����������ȡ���鳤��
	char* finbef = new char[size];
	for (int i = 0; i < size; i++) {
		finbef[i] = inp[i];
	}	//��vector������ת��Ϊ��ͨ������
	const char* const fin = finbef;	//�������е�Ԫ��ת��Ϊconst�ͣ����ڵ��ú���
	parseHex(fin);		//���ú���
	return 0;

}