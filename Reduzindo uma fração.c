int main(void)
{
	int a, b, z = 1;
	scanf("%i %i", &a, &b);
	int x = a, y = b;
	while(z != 0)
	{
		z = x%y;
		x = y;
        y = z;
	}
	printf("%i %i\n", a/x, b/x);
}