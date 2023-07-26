//String calculate consonant
#include <stdio.h>
#include <string.h>

int main() {
    int n,i,v=0,c=0;
    char str[10000];
    printf("Enter string: ");
    gets(str);

    n=strlen(str);
    for(i=0;i<n;i++) {
        if(str[i]=='a'|| str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') {
            v++;
        }
        else {
            c++;
        }
    }

    printf("\nTotal vowel= %d",v);

    printf("\nTotal consonant= %d",c);

    return 0;
}
