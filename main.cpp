//��ӡ100���ڵ�����
//������ֻ�ܱ�1����������������
#include<iostream>
#define MinN 2     //�½�
#define MaxN 100     //�Ͻ�
using namespace std;
int main()
{
	int n, m;
	cout << "The Prime number from "<< MinN <<" to "<<MaxN<<endl;
	for (n = MinN; n <= MaxN; n++)
	{
		for (m = 2; m <= n; m++)
		{
			if (n%m == 0)
				break;
		}
		if (n == m)
		{
			cout <<n <<endl;
		}
	}
	return 0;
}