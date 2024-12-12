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
	} while (changed == false);//进行冒泡排序
	cout << "新的排列好的数组为：";
	for (int n = 0; n < size1 + size2; n++) {
		cout << list3[n] << ' ';
	}//输出排序好的数组
}
int main() {
	int size1, size2, size3;
	cout << "请输入一个不大于80的数作为第一个数组的长度" << endl;
	cin >> size1;	//输入数组长度
	cout << "请再输入一个不大于80的数作为第二个数组的长度" << endl;
	cin >> size2;	//输入数组长度
	size3 = size1 + size2;	//求得合并后的数组长度
	int* list1 = new int[size1];
	int* list2 = new int[size2];
	int* list3 = new int[size3];
	cout << "请输入第一个数组" << endl;
	for (int i = 0; i < size1; i++) {
		cin >> list1[i];
	}//输入第一个数组
	cout << "请输入第二个数组" << endl;
	for (int i = 0; i < size2; i++) {
		cin >> list2[i];
	}//输入第二个数组
	for (int m = 0; m < size1; m++) {
		list3[m] = list1[m];
	}
	for (int n = 0; n < size2; n++) {
		list3[size1 + n] = list2[n];
	}//利用两个for循环把两个数组合并为一个数组
	merge( list1, size1, list2, size2, list3);	//调用函数把合并后的数组进行冒泡排序并输出
	delete []list1, list2, list3;//释放动态内存
	return 0;
}