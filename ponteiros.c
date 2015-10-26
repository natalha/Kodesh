#include <stdio.h>
int main(int argc, char const *argv[])
{
	int  a;
	int *p = &a;
	*p = 20;
	printf (" a :%i\n",  a);
	printf ("*p :%i\n", *p);
}