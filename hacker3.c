#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b,c,d;
    float a1,a2,c2,d2;

    scanf("%d %d",&a,&b);
    c=a+b;
    d=a-b;
    printf("%d %d\n",c,d);
    scanf("%f %f",&a1,&a2);
    c2=a1+a2;
    d2=a1-a2;
    printf("%.1f %.1f",c2,d2);
    return 0;
}
