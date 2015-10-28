#include <stdio.h>
int main()
{
    int m, n, x, y, xm, yn, max = 0;
	scanf("%i %i", &m, &n);
	for (int x = 0; x <= m; x++)
	{
		for (int y = 0; y <= n; y++)
		{
			if (max < ((x*y)-(x*x)+y))
			{
				xm = x;
				yn = y;
				max = (x*y)-(x*x)+y;
			}
		}
	}
	printf("%i x=%i y=%i", max, xm, yn);
	return 0;
}