int fatorial(int n)
{
	int fat = 1;
	for (int i = 0; i < n; ++i)
	{
		fat = fat*(n-i);
	}
	return fat;
}