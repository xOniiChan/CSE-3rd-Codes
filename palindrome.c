 #include <stdio.h>
#include <string.h>
int main() {
    char str1[10000],str2[10000];
    printf("Enter a string:");
    gets(str1);
    strcpy(str2,str1);
    strrev(str2);
    //printf("%s",str2);
    if(strcmp(str2,str1)==0) {
        printf("It is palindrome\n");
    }
    else {
        printf("It is not palindrome\n");
    }

    return 0;
}
