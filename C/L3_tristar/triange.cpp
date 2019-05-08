#include <stdio.h>

void main()
{
	// 印出指定高 *集合成的等腰直角三角形
	// ex: (高)6, (底)6
	// *
	// **
	// ***
	// ****
	// *****
	// ******
	// 使用指令 printf("*");

	int height = 5;
	//printf("*");

	// for loop 用法: for (int i = 0; i < 10; i = i + 1)
	for (int i = 0; i < height; i = i + 1)
	{
		printf("\n");
		// 每一行要印出 (i + 1)個 *
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
		// 每一行補印出 height - (i + 1)個空白鍵
		for (int s = 0; s < height - (i + 1) ; s++)
		{
			printf(" ");
		}
		// 每一行要印出 (i + 1)個 *
		for (int j = 0; j < i+1; j++)
		{
			printf("*");
		}
		printf("\n");
 	} 

	getchar();
}