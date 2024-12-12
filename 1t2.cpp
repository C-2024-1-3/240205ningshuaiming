#include<iostream>
#include <cmath>
using namespace std;
bool is_prime(int num)//定义一个判断一个整数是否为素数的bool型函数
{
	for (int in = 2; in <= sqrt(num); )//若传2，3，则in>num的开方，说明他们是素数。一个数若不是素数，它的一个非1非本身因数一定小于等于它的开方，故利用for循环和if条件判断是否存在大于1在小于等于它的开方范围内的整数因数便可
	{
		if (num % in == 0)
		{
			return false;
			break;
		}//若存在相应范围内的整数因数，说明传入的参数不是素数，返回false
		else
		{
			in++;
		}
	}
	return true;//最终未能找到相应范围内的因数，则传入的参数是素数，返回true
}
int main()
{

	for (int i = 1,li=0,num=2; i <= 200;li=0 )//定义num初始值为2开始逐个判断是不是素数，list用来记录每一行的输出个数，i用来记录总输出个数
	{
		for (; li % 10 != 0 || li == 0; )
		{
			if (is_prime(num) == 1)
			{
				cout << num<<'\ ';
				i++;
				li++;
				num++;
			}
			else
			{
				num++;

			}
			
		}
		cout << endl;
	}//利用for循环和if判断，并调用is_prime（）函数，找出前200个素数，并按每行10个输出
	return 0;
}