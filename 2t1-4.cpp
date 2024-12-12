#include <iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	bool changed = false;
	do {
		changed = true;
		for (int j = 0; j < size1 + size2 - 1; j++) {
			if (list3[j] > list3[j + 1]) {
				int mid;
				mid = list3[j];
				list3[j] = list3[j + 1];
				list3[j + 1] = mid;
				changed = false;
			}
		}
	} while (changed == false);//����ð������
	cout << "�µ����кõ�����Ϊ��";
	for (int n = 0; n < size1 + size2; n++) {
		cout << list3[n] << ' ';
	}//�������õ�����
}
int main() {
	int size1, size2, size3;
	cout << "������һ��������80������Ϊ��һ������ĳ���" << endl;
	cin >> size1;	//�������鳤��
	cout << "��������һ��������80������Ϊ�ڶ�������ĳ���" << endl;
	cin >> size2;	//�������鳤��
	size3 = size1 + size2;	//��úϲ�������鳤��
	int* list1 = new int[size1];
	int* list2 = new int[size2];
	int* list3 = new int[size3];
	cout << "�������һ������" << endl;
	for (int i = 0; i < size1; i++) {
		cin >> list1[i];
	}//�����һ������
	cout << "������ڶ�������" << endl;
	for (int i = 0; i < size2; i++) {
		cin >> list2[i];
	}//����ڶ�������
	for (int m = 0; m < size1; m++) {
		list3[m] = list1[m];
	}
	for (int n = 0; n < size2; n++) {
		list3[size1 + n] = list2[n];
	}//��������forѭ������������ϲ�Ϊһ������
	merge( list1, size1, list2, size2, list3);	//���ú����Ѻϲ�����������ð���������
	delete []list1, list2, list3;//�ͷŶ�̬�ڴ�
	return 0;
}