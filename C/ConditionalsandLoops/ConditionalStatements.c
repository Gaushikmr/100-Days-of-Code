#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    static const char* str_num[]={"one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d",&n);
    printf( "%s", n>=1 && n<=9 ? str_num[n-1]: "Greater than 9" ); 
    return 0;
}

