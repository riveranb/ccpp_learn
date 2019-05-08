// lesson: hello world, and variable, array, loop
// declare variable of integer array, print it using for loop

#include <stdio.h>
#include <iostream>

void main()
{
	printf("Hello world!\n");

	// 宣告陣列變數(靜態整數陣列宣告), 含有10個元素
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

	// for loop, 列印每一個元素變數內容
	for (int i = 0; i < 10; i = i + 1)
	{
		printf("%d\n", family[i]);
	}

	getchar();
}