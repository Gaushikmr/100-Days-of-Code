#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

   char ch;           
   char s[100];
   char sen[122];
    scanf("%c%*c",&ch);
    scanf("%s%*c",&s);
    scanf("%[^\n]",&sen);
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s",sen);
return 0;
}
