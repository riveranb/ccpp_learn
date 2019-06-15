#include "stdio.h"

// �w�q Fibonacci number ���
// ���j�g�k, �Ĳv�ܮt
int fibonacci(int input)
{
	if ( input ==0)
	{
		// input == 0 ����
		// F(0) = 0
		return 0;
	}
	else if (input == 1 )
	{
		// F(1) = 1
		return 1;
	}
	else if (input < 0)
	{
		return 0;
	}
	else
	{
		// input = n
		// F(n) = F(n - 1) + F(n - 2)
		// recursive call for F(n - 1)
		int F_n_1 = fibonacci(input - 1);
		// recursive call for F(n - 2)
		int F_n_2 = fibonacci(input - 2);
		return F_n_1 + F_n_2;
	}
}

void main()
{
	// �m�߻��j����, recursive function
	// ���ͫ��w���ת��O���ƦC, Fibonacci
	// �b�ƾǤW�A�O�i�����ƦC�O�H���j����k�өw�q�G
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

	//int result = fibonacci(0);
	//printf("F(0) = %d\n", result);
	//result = fibonacci(1);
	//printf("F(1) = %d\n", result);
	//result = fibonacci(2);
	//printf("F(2) = %d\n", result);
	//result = fibonacci(3);
	//printf("F(3) = %d\n", result);
	//result = fibonacci(4);
	//printf("F(4) = %d\n", result);

	for (int i = 0; i < 45; ++i)
	{
		printf("F(%d) = %d\n", i, fibonacci(i));
	}

	getchar();
}




