#include<iostream>
#include<vector>	//调用<vector>头文件，便于在程序中创建vector型数组，实现动态地对数组长度进行改变
using namespace std;
void indexOf(const char* s1, const char *s2) {	//定义一个函数用来进行子串判断
	const char* re = strstr(s2, s1);	//调用strstr（）函数，判断s1是否为s2的子串
	if (re != nullptr) {
		cout << "s1是s2的子串，s1在s2中的下标为：" << re - s2 << endl;
	}
	else {
		cout << "s1不是s2的子串，返回值：" << -1 << endl;
	}
}
int main() {
	vector<char>s1;
	vector<char>s2;		//定义两个vector型的变量
	char mid1, mid2;
	cout << "本程序可以判断一个字符串s1是否为另一个字符串s2的字串" << endl;
	cout << "请输入第一个字符串s1" << endl;
	while (mid1 = cin.get()) {
		if (mid1 != '\n') {
			s1.push_back(mid1);
		}
		else {
			s1.push_back('\0');
			break;
		}
	}	//输入字符串
	cout << "请输入第二个字符串s2" << endl;
	while (mid2 = cin.get()) {
		if (mid2 != '\n') {
			s2.push_back(mid2);
		}
		else {
			s2.push_back('\0');
			break;
		}
	}	//输入字符串
	int size1 = s1.size();
	int size2 = s2.size();
	char* S1 = new char[size1];
	char* S2 = new char[size2];
	for (int i = 0; i < size1; i++) {
		S1[i] = s1[i];
	}
	for (int i = 0; i < size2; i++) {
		S2[i] = s2[i];
	}									//将vector型的 数组转换为普通类型数组
	indexOf(S1, S2);	//调用函数进行子串判断
	delete[]S1, S2;		//释放动态内存
	return 0;


}
