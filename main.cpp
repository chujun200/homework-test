//��ӡ100���ڵ�����
//������ֻ�ܱ�1����������������
#include<iostream>
#include<cmath>
#define MinN 2     //�½�
#define MaxN 100     //�Ͻ�
using namespace std;

int checkPrimeNumber(int n)    //�������
{
	int m=0;
	if (n <= 1)
		return 0;
	for (m = 2; m <= sqrt(n); m++)
	{
		if (n%m == 0)
			return 0;    //����ܱ�����n֮ǰ������������������
	}
	return 1; //�����ǣ���Ϊ����
};
int main()
{
	int n;
	cout << "The Prime number from "<< MinN <<" to "<<MaxN<<endl;
	for (n = MinN; n <= MaxN; n++)
	{
		if (checkPrimeNumber(n) == 1)
			cout <<n <<endl;
	}
	return 0;
}