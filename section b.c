#include<stdio.h>
int main ()
{
    char a[20], b[30];
    int count = 0;
    printf("Enter a string:");
    scanf("%s", &a);
    strcpy(b, a);
    count = strlen(b);
    printf("Number of char: %d", count);
    return 0;
}
