#include <stdio.h>
int main(void) 
{
    int maiorfaturamento, melhordia, faturamento;
    int dia = 1;
    while (dia < 31)
    {
        scanf("%i", &faturamento);
        if (faturamento > maiorfaturamento)
        {
            maiorfaturamento = faturamento;
            melhordia = dia;
            dia++;
        }
        else
        {
            dia++;
        }
    }
    printf("%i %i", melhordia, maiorfaturamento);
    return 0;
}