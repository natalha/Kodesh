#include <stdio.h>
int main(void)
{
int a;
scanf("%d", &a);
if (a>0)
{
    printf("%d", 1);
}
else if (a==0)
{
    printf("%d", 0);
}
else 
{
    printf("%d", -1);
}

return 0;
}
