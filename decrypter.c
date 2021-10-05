#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void decrypt(char *c)
{
    char *ptr = c;
    while(*ptr != '\0')
    {
        *ptr = *ptr-4;// key is 4
        ptr++;
    }
}
int main()
{
    char c[50];
    printf("Enter your encrpyted message here\n\n");
    gets(c);
    printf("\n");
    decrypt(c);
    printf("Your message has been decrypted successfully : \n\n\n");
    printf("%s",c);
    printf("\n");
    printf("\n");
    return 0;
}
