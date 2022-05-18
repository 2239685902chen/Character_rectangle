#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char q = { 0 };
	int w = 0;
	int e = 0;
	scanf("%c", &q);
	for (w = 0; w < 3; w++)
	{
		for (e = 0; e < 3; e++)
		{
			printf("%c", q);
		}
		printf("\n");
	}
	return 0;
}