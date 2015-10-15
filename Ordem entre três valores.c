#include <stdio.h>
int main(void)
{
    int x, y, z, a;
    scanf("%d %d %d", &x, &y, &z);
    if (x>y && x>z)
    {
        if (y>z)
        {
            a = x;
            x = z;
            z = a;
        }
        else
        {
            a = y;
            y = z;
            z = a;
        }
    }
    else if (z>x && z>y)
    {
        if(x>y)
        {
            a = y;
            y = x;
            x = a;
        }
    }
    else if (x>z)
    {
        a = z;
        z = y;
        y = x;
        x = a;
    }
    else if (z>x)
    {
        a = z;
        z = y;
        y = a;
    }
    printf("%d %d %d", x, y, z);
}