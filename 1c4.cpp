#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65534;//���峣����
	cout << "output in unsigned int type:" << testUnint << endl;  //unsigned int�������
	cout << "output in char type:!" << static_cast<char>(testUnint) << endl; //char type�������
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;//Ϊʲô���Ϊ-2?:��Ϊshort ���͵�ȡֵ��ΧΪ-32768~32767��65534����32767�Ĵ�С�����´�-32768��ʼ���㣬��������Ϊ-2
	cout << "output in int type:" << static_cast<int>(testUnint) << endl;//int�������
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;//double�������
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;//double�������������λ��С��λ������4λ����ѧ��������ʽ
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16�������
	cout << "output in Oct unsigned int type:" << oct << testUnint << endl;//8�������
	system("pause");
	return 0;
}