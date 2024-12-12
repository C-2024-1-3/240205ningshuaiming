#include <iostream>
#include <vector>	//引入头文件<vector>,便于后续创建vector型数组，实现数组的动态调整
using namespace std;
void count(const char s[], int counts[]) {
	for (int i = 0; i < 26; i++) {
		counts[i] = 0;
		for (int n = 0; s[n] != '\0'; n++) {
			if (s[n] == 65 + i || s[n] == 97 + i) {
				counts[i]++;
			}
		}
	}		//利用A到Z以及a到z的ascii码对各个字母出现的次数进行统计
	for (int c = 0; c < 26; c++) {
		if (counts[c] != 0) {
			cout << char(97 + c) << ":" << counts[c] << ' ' << "times" << endl;
		}
	}	//将统计结果中字母出现次数非零的部分进行输出
}
int main() {
	int counts[26];
	vector <char> start;
	char box;
	cout << "请输入一个字符串，本程序可以数出字符串中每个字母出现的次数，其中字母不分大小写，例如字母A和字母a都被看作a" << endl;
	while (box=cin.get()) {
		if (box != '\n') {
			start.push_back(box);
		}
		else {
			start.push_back('\0');
			break;
		}
	}		//将输入的字符构建为一个以'\0'结束的字符串
	int size = start.size();	//利用size（）函数求得字符串的长度
	char* put = new char[size];
	for (int i = 0; i < size; i++) {
		put[i] = start[i];
	}		//将vector型数组转换为普通型数组
	count(put, counts);		//调用函数数出字符串中每个字母出现的次数
	return 0;
}