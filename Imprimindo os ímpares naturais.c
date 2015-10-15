#include <stdio.h>
int main(void) 
{
    int n;
	int contador = 0;
	int x = 1;
    scanf("%i", &n);
    while (contador < n)
    {
    	if (x%2 != 0)
    	{
    		printf("%i ", x);
    		contador++;
    		x++;
    	}
    	else 
    	{
    		x++;
    	}
    }
}