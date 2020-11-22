#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int main() 
{
	int i, j=0, k , tmp;
	int flag=1;
	int a[SIZE] = { 26,5,81,7,63 };

	for (i = 0; i < SIZE - 1 && flag != j; i++) //°õ¦æ¤E¦¸
	{
		flag = 0;

		for (j = 0; j < SIZE - 1 -i; j++) 
		{
			if (a[j] > a[j + 1]) 
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
			else 
			{
				flag++;
			}
		}

		if (flag != j) {
			printf("Loop %d:", i);

			for (k = 0; k < SIZE; k++)
			{
				printf("%4d", a[k]);
			}
			printf("\n");
		}
	}

	system("pause");
	return 0;
}