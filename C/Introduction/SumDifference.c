#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float s,t;
    scanf("%d %d %f %f", &a, &b, &s, &t);
    printf("%d %d\n%.1f %.1f", a+b, a-b, s+t, s-t);
    
    return 0;
}
