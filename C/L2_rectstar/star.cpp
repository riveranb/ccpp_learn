#include <stdio.h>

void main()
{
	// �L�X���w�� , �e�� *���X���������
	// ex: (��)4, (�e)6
	// ******
	// ******
	// ******
	// ******
	// �ϥΫ��O printf("*");

	int height = 8;
	int width = 8;
	//printf("*");

	// for loop �Ϊk: for (int i = 0; i < 10; i = i + 1)
	for (int i = 0; i < height; i = i + 1)
	{
		// �C�@�泣�ݭn�L�X����, �w���L�Ϋ�L���i�H
		printf("\n");
		// �C�@��n�L�X width�� *
		for (int d = 0; d < width; d = d + 1)
		{
			printf("*");
		}
	}

	getchar();
}