#include <stdio.h>

void main()
{
	// 印出指定高 , 寬的 *集合成的長方形
	// ex: (高)4, (寬)6
	// ******
	// ******
	// ******
	// ******
	// 使用指令 printf("*");

	int height = 8;
	int width = 8;
	//printf("*");

	// for loop 用法: for (int i = 0; i < 10; i = i + 1)
	for (int i = 0; i < height; i = i + 1)
	{
		// 每一行都需要印出換行, 預先印或後印都可以
		printf("\n");
		// 每一行要印出 width個 *
		for (int d = 0; d < width; d = d + 1)
		{
			printf("*");
		}
	}

	getchar();
}