#include "stdio.h"

void main()
{
	// 產生指定長度的費式數列, Fibonacci
	// 在數學上，費波那契數列是以遞迴的方法來定義：
	// F(0) = 0,
	// F(1) = 1,
	// F(n) = F(n - 1) + F(n - 2)

	// ex: 
	//  F(0) = 0
	//	F(1) = 1
	//	F(2) = F(0) + F(1) = 0 + 1 = 1
	//	F(3) = F(1) + F(2) = 1 + 1 = 2
	//	F(4) = F(3) + F(2) = 2 + 1 = 3
	//	F(5) = F(4) + F(3) = 3 + 2 = 5

	// i++  =>  i;  i = i + 1;
	// ++i  =>  i = i + 1; i;

	unsigned long long int F[50];
	for (int i = 0; i < 50; i++)
	{
		if (i == 0)
		{
			F[i] = 0;
		}
		else if (i == 1)
		{
			F[i] = 1;
		}
		else
		{
			F[i] = F[i - 1] + F[i - 2];
		}
	}

	for (int i = 0; i < 50; ++i)
	{
		printf("%I64u\n", F[i]);
	}

	getchar();
}




