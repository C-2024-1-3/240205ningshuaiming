#include <iostream>
using namespace std;
int main() {
	bool a[100];//定义bool数组代表柜子的开关状态
	for (int i = 0; i < 100; i++) {
		a[i] = false;
	}//实现开学第一天所有柜子都关着
	for (int S = 1; S <= 100; S++) {
		for (int L = S; L <= 100; L = L + S) {
			a[L - 1]=!a[L - 1];
		}
	}	//根据学生学号对柜子状态进行改变
	cout << "所有开着的柜子的号码为：";
	for (int n = 0; n < 100; n++) {
		if (a[n] == true) {
			cout << "L" << n + 1 << ' ';//用' '表示空格进行分隔
		}
	}	//把所有状态为true的柜子代号进行输出
	return 0;
}