//打印100以内的素数
//素数：只能被1和它本身整除的数
#include<iostream>
#include<cmath>
#define MinN 2     //下界
#define MaxN 100     //上界
using namespace std;

int checkPrimeNumber(int n)    //检查素数
{
	int m=0;
	if (n <= 1)
		return 0;
	for (m = 2; m <= sqrt(n); m++)
	{
		if (n%m == 0)
			return 0;    //如果能被根号n之前的数除尽，不是素数
	}
	return 1; //都不是，则为素数
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