#include <stdio.h>

void main()
{
	// �L�X���w�� *���X�������y�����T����
	// ex: (��)6, (��)6
	// *
	// **
	// ***
	// ****
	// *****
	// ******
	// �ϥΫ��O printf("*");

	int height = 5;
	//printf("*");

	// for loop �Ϊk: for (int i = 0; i < 10; i = i + 1)
	for (int i = 0; i < height; i = i + 1)
	{
		printf("\n");
		// �C�@��n�L�X (i + 1)�� *
		for (int d = 0; d < i+1; d = d + 1)
		{
			printf("*");
		}
	}

	printf("\n\n\n");

	//    *
	//   ** 
	//  ***
	// ****
	//*****
	for (int i = 0; i < height; i = i + 1)
	{
		// �C�@��ɦL�X height - (i + 1)�Ӫť���
		for (int s = 0; s < height - (i + 1) ; s++)
		{
			printf(" ");
		}
		// �C�@��n�L�X (i + 1)�� *
		for (int j = 0; j < i+1; j++)
		{
			printf("*");
		}
		printf("\n");
 	} 

	getchar();
}