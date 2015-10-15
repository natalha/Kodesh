#include <stdio.h>
int main(void) 
{
    int n, m, p, i;
    int contador = 0;
	int x = 1;
    scanf("%i", &n);
    while (contador < n)
    {
    	scanf("%i", &m);
        if (m % 2 == 0)
        {
        	p++;
        	contador++;
        }
        else 
        {
        	i++;
        	contador++;
        }
    }
    printf("%i %i", p, i);
    return 0;
}