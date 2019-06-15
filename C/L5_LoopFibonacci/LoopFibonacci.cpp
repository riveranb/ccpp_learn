#include "stdio.h"

void main()
{
	// 玻ネ﹚禣Α计, Fibonacci
	// 计厩禣猧ê计琌患癹よ猭ㄓ﹚竡
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

	// 箇ミFibonacci计挡狦皚
	unsigned long long int F[50];
	// 璸衡– Fibonacci, F(i)
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
		printf("%I64u\n", F[i]); //  64bit 俱计计
	}

	getchar();
}




