#include <iostream>
#include <vector>	//����ͷ�ļ�<vector>,���ں�������vector�����飬ʵ������Ķ�̬����
using namespace std;
void count(const char s[], int counts[]) {
	for (int i = 0; i < 26; i++) {
		counts[i] = 0;
		for (int n = 0; s[n] != '\0'; n++) {
			if (s[n] == 65 + i || s[n] == 97 + i) {
				counts[i]++;
			}
		}
	}		//����A��Z�Լ�a��z��ascii��Ը�����ĸ���ֵĴ�������ͳ��
	for (int c = 0; c < 26; c++) {
		if (counts[c] != 0) {
			cout << char(97 + c) << ":" << counts[c] << ' ' << "times" << endl;
		}
	}	//��ͳ�ƽ������ĸ���ִ�������Ĳ��ֽ������
}
int main() {
	int counts[26];
	vector <char> start;
	char box;
	cout << "������һ���ַ�������������������ַ�����ÿ����ĸ���ֵĴ�����������ĸ���ִ�Сд��������ĸA����ĸa��������a" << endl;
	while (box=cin.get()) {
		if (box != '\n') {
			start.push_back(box);
		}
		else {
			start.push_back('\0');
			break;
		}
	}		//��������ַ�����Ϊһ����'\0'�������ַ���
	int size = start.size();	//����size������������ַ����ĳ���
	char* put = new char[size];
	for (int i = 0; i < size; i++) {
		put[i] = start[i];
	}		//��vector������ת��Ϊ��ͨ������
	count(put, counts);		//���ú��������ַ�����ÿ����ĸ���ֵĴ���
	return 0;
}