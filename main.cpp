//��ӡ100���ڵ�����
//������ֻ�ܱ�1����������������
#include<iostream>
#define MinN 2     //�½�
#define MaxN 100     //�Ͻ�
using namespace std;

int checkPrimeNumber(int n) 
{
	int m;
	if (n <= 1)
		return 0;
	for (m = 2; m <= n; m++)
	{
		if (n%m == 0)
			break;
	}
	if (n == m)
		return 1;
	else
		return 0;
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