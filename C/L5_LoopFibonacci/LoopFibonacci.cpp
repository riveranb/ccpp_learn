#include "stdio.h"

void main()
{
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

	// i++  =>  i;  i = i + 1;
	// ++i  =>  i = i + 1; i;

	// �w���إ�Fibonacci�ƦC���G�}�C
	unsigned long long int F[50];
	// �p��C�@�� Fibonacci, F(i)
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
		printf("%I64u\n", F[i]); // �C�L�X 64bit ��Ƽƭ�
	}

	getchar();
}




