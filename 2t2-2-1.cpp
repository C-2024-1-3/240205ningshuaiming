#include<iostream>
#include<vector>	//����<vector>ͷ�ļ��������ڳ����д���vector�����飬ʵ�ֶ�̬�ض����鳤�Ƚ��иı�
using namespace std;
void indexOf(const char* s1, const char *s2) {	//����һ���������������Ӵ��ж�
	const char* re = strstr(s2, s1);	//����strstr�����������ж�s1�Ƿ�Ϊs2���Ӵ�
	if (re != nullptr) {
		cout << "s1��s2���Ӵ���s1��s2�е��±�Ϊ��" << re - s2 << endl;
	}
	else {
		cout << "s1����s2���Ӵ�������ֵ��" << -1 << endl;
	}
}
int main() {
	vector<char>s1;
	vector<char>s2;		//��������vector�͵ı���
	char mid1, mid2;
	cout << "����������ж�һ���ַ���s1�Ƿ�Ϊ��һ���ַ���s2���ִ�" << endl;
	cout << "�������һ���ַ���s1" << endl;
	while (mid1 = cin.get()) {
		if (mid1 != '\n') {
			s1.push_back(mid1);
		}
		else {
			s1.push_back('\0');
			break;
		}
	}	//�����ַ���
	cout << "������ڶ����ַ���s2" << endl;
	while (mid2 = cin.get()) {
		if (mid2 != '\n') {
			s2.push_back(mid2);
		}
		else {
			s2.push_back('\0');
			break;
		}
	}	//�����ַ���
	int size1 = s1.size();
	int size2 = s2.size();
	char* S1 = new char[size1];
	char* S2 = new char[size2];
	for (int i = 0; i < size1; i++) {
		S1[i] = s1[i];
	}
	for (int i = 0; i < size2; i++) {
		S2[i] = s2[i];
	}									//��vector�͵� ����ת��Ϊ��ͨ��������
	indexOf(S1, S2);	//���ú��������Ӵ��ж�
	delete[]S1, S2;		//�ͷŶ�̬�ڴ�
	return 0;


}
