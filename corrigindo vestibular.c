#include <stdio.h>
int main()
{
    int n, quest, nota, gab[30];
	scanf("%i", &n);

	for (int i = 0; i < 30; i++)
	{
		scanf("%i", &gab[i]);
	}

	for (int i = 0; i < n; i++)
	{
		nota = 0;
		for (int q = 0; q < 30; q++)
		{
			scanf("%i", &quest);
			if (gab[q] == quest)
			{
				nota++;
			}
		}
		printf("%.2f\n", nota/3.0);
	}

}