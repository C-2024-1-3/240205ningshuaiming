#include <iostream>
using namespace std;
class Student {
	friend void max(Student* find);
private:
	int num;
	double grade;
public:

	void inp() {
		cout << "请输入该学生的学号和成绩" << endl;
		cin >> num >> grade;
	}
};
void max(Student*find){		//设立一个函数max，用指向对象的指针作函数参数
	bool help = false;
	do {
		
		help = true;
		for (int i = 0; i < 4; i++) {
			if ((find+i)->grade<(find+i+1)->grade) {
				help = false;
				Student mid;
				mid = *(find + i);
				*(find + i) = *(find + i + 1);
				*(find + i + 1) = mid;

			}
		}
	} while (help == false);			//利用气泡排序的方法将成绩最高者的数据放在原对象数组的第一位，即find指针所指向的位置
	cout << "成绩最高者的学号为:" << find->num << endl;		//利用find指针数出成绩最高者的学号
}
int main() {
	cout << "请你逐个输入五个学生的学号和成绩" << endl;
	Student s1, s2, s3, s4, s5;		//创建五个Student类对象
	s1.inp();
	s2.inp();
	s3.inp();
	s4.inp();
	s5.inp();		//为五个对象中的成员属性赋值
	Student gro[5] = { s1,s2,s3,s4,s5 };		//构建一个对象数组，内放之前创建的五个对象
	max(gro);		//调用max函数找出5个学生的最高成绩者，并输出其学号
	return 0;
}