#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x, y, z = 1;
	scanf("%i %i", &x, &y);
	while(z != 0)
	{
		z = x%y;
		x = y;
        y = z;
	}
	printf("%i\n", x);
	return 0;
}