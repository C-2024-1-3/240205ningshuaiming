#include <iostream>
using namespace std;
double* ord( double list[],int Size) {		//���庯�������������������ɴ�С����
	bool help = false;
	do {
		help = true;		//��ʼֵ��Ϊfalse
		for (int i = 0; i < Size - 1; i++) {
			if (list[i] > list[i + 1]) {
				double swi = list[i];
				list[i] = list[i + 1];
				list[i + 1] = swi;
				help = false;
			}	//һ������һ�ε�����������������֮ǰ������������Ҫ���������ɣ���Ҫ��changedֵ��Ϊtrue���ڴ�ִ�м�������ѭ��
		}
	} while (help == false);//����ִ��������changedֵΪtrue
	double* ret = new double[Size]; //����һ����̬����������������õ�Ԫ�أ��������������з��ظ������׵�ַ�����ܷ��ʸ������е�Ԫ��
	for (int i = 0; i < Size; i++) {
		ret[i] = list[i];
	}
	return ret;
}
int main() {
	int size;
	cout << "���������Ϊ�㽨��һ����̬���飬��С�����������ָ�뷽ʽ�������Ԫ��" << endl;
	cout << "����������ĳ���:"<<endl;
	cin >> size;
	cout << "���������飨�ÿո�����������зָ���" << endl;

	double* inp = new double[size];		//������̬����
		for (int i = 0; i < size; i++) {
			cin >> inp[i];
		}		//����
		double* outp = ord(inp, size);		//���ú���
		cout << "�������Ϊ��";
		for (int n = 0; n < size; n++) {
			cout << *outp<<'\ ';
			outp++;
		}		//���
		delete[]inp, outp;		//�ͷŶ�̬�ڴ�
		return 0;
}
