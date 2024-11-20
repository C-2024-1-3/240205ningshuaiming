#include <iostream> 
using namespace std;
int main()
{
	int a;
	char ch, ch2;//定义字符型变量
	cout << "请输入一个字符" << endl;
	cin >> ch;//为字符型变量ch赋值
	a = int(ch);//将ch强制转换成整形变量，并赋值给a
	if (a >= 97 && a <= 122)//判定a的值是否在小写字母对应的ascII码值范围内，若在，则执行下述程序
	{
		a = a - 32;//因为每个小写字母总比它对应的大写字母的ascII码值大32，故通过a=a-32将a的值重赋为所输小写字母对应的大写字母的ascII码值
		ch2 = char(a);//将a转换成字符型变量并赋值ch2,此时ch2即为对应的大写字母
		cout << "你输入的为小写字母，其大写为" << ch2 << endl;//输出
	}
	else//否则a不在上述范围内，即输入的字符不是小写字母
	{
		cout << "你输入的字符非小写字母，其ascII码为" << a << endl;//声明输入的字符非小写字母，并输出其ascII码值
	}
	return 0;
}