#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encrypt(char *c)
{
    char *ptr = c;
    while(*ptr != '\0')
    {
        *ptr = *ptr+4;
        ptr++;
    }
}
int main()
{
    char c[50];
    printf("Write your message here!\n\n");
    gets(c);
    printf("\n");
    encrypt(c);
    printf("Your message has been encrypted successfully : \n\n\n");
    printf("%s",c);
    printf("\n");
    printf("\n");
    return 0;
}



