#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char str[100];
    char t[100];
    
    scanf("%c", &ch);
    printf("%c\n",ch);
    scanf("%s",str);
    printf("%s\n",str);
    getchar();
    
    scanf("%[^\n]%*c", t);
    printf("%s",t);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
