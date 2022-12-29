#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char c;
    char str1[50];
    char sen[100];

    scanf("%c", &c);
    scanf("%s", str1);
    scanf("\n");
    scanf("%[^\n]%*c", sen);

    printf("%c\n", c);
    printf("%s\n", str1);
    printf("%s", sen);

    return 0;
}