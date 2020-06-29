#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d", &n);
    int num, temp, sum = 0;
    temp = n;
    
    while(temp > 0)
    {
        num = temp % 10;
        sum = sum + num;
        temp = temp / 10;
    }
    printf("%d\n",sum);
    return 0;
}

