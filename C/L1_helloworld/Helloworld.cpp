// lesson: hello world, and variable, array, loop
// declare variable of integer array, print it using for loop

// �ޥ� stdio.h �����쪺���� library�u��禡/�w�q
#include <stdio.h>

// �{������_�I/�J�f
void main()
{
	// �I�s�C�L�u��禡
	printf("Hello world!\n");

	// �ŧi�}�C�ܼ�(�R�A��ư}�C�ŧi), �t��10�Ӥ���
	int family[10];

	family[0] = 0;
	family[1] = 1;
	family[2] = 2;
	family[3] = 3;
	family[4] = 4;
	family[5] = 5;
	family[6] = 6;
	family[7] = 7;
	family[8] = 8;
	family[9] = 9;

	// for loop, �C�L�C�@�Ӥ����ܼƤ��e
	for (int i = 0; i < 10; i = i + 1)
	{
		printf("%d\n", family[i]);
	}

	getchar();
}