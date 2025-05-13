#include<stdio.h>
int main ()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
            printf("%c is in upper case.", ch);
    }
    else{
        printf("%c is in lower case." , ch);
    }
    return 0;
}
