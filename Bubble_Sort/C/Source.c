#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//Buddle_Sort
int main()
{
	int Buddle[9] = { 2, 5, 3, 9, 41, 21, 7, 10, -1 };
	int Temp;

	for (int j = 0; j < 8; j++)
	{
		for (int i = 0; i < 9; i++)
		{
			if (Buddle[i] > Buddle[i + 1])
			{
				Temp = Buddle[i + 1];
				Buddle[i + 1] = Buddle[i];
				Buddle[i] = Temp;
			}
			printf("%d ", Buddle[i]);
		}
		printf("\n");
	}
}