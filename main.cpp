//打印100以内的素数
//素数：只能被1和它本身整除的数
#include<iostream>
#define MinN 2     //下界
#define MaxN 100     //上界
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