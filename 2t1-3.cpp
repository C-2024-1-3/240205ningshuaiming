#include <iostream>
using namespace std;
int main() {
	bool a[100];//����bool���������ӵĿ���״̬
	for (int i = 0; i < 100; i++) {
		a[i] = false;
	}//ʵ�ֿ�ѧ��һ�����й��Ӷ�����
	for (int S = 1; S <= 100; S++) {
		for (int L = S; L <= 100; L = L + S) {
			a[L - 1]=!a[L - 1];
		}
	}	//����ѧ��ѧ�ŶԹ���״̬���иı�
	cout << "���п��ŵĹ��ӵĺ���Ϊ��";
	for (int n = 0; n < 100; n++) {
		if (a[n] == true) {
			cout << "L" << n + 1 << ' ';//��' '��ʾ�ո���зָ�
		}
	}	//������״̬Ϊtrue�Ĺ��Ӵ��Ž������
	return 0;
}