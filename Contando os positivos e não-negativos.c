#include <stdio.h>
int main(void) 
{
    int n;
    int x;
    int contadorp = 0;
    int contadorn = 0;
    int contador = 0;
    scanf("%i", &n);
    while (contador < n)
    {
        scanf("%i", &x);
    	if (x > 0)
    	{
    		contadorp++;
    	}
    	else 
    	{
            contadorn++;
    	}
        contador++;
    }
    printf("%i %i", contadorp, contadorn);
}