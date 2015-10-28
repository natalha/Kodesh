#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j, mi, mj;
    scanf("%i %i", &i, &j);
    float m[i][j], t[j][i];
	for (mi = 0; mi < i; mi++)
	{
		for (mj = 0; mj < j; mj++)
		{
			scanf("%f", &m[mi][mj]);
			t[mj][mi] = m[mi][mj];
		}
	}
	for (i = 0; i < mj; i++)
	{
		for (j = 0; j < mi; j++)
		{
			printf("%.2f ",  t[i][j]);
		}
		printf("\n");
	}
}