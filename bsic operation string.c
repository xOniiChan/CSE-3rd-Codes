//String basic operation
#include <stdio.h>
#include <string.h>

int main() {
    char str_1[1000],str_2[1000];
    printf("Enter 1st string value: ");
    gets(str_1);
    printf("\n\nEnter 2nd string value: ");
    gets(str_2);

    if(strcmp(str_1,str_2)==0) {
        printf("\nTwo string are equal\n");
    }
    if(strcmp(str_1,str_2)>0) {
        printf("\n1st string str_1 is greater than str_2\n");
    }
    if(strcmp(str_1,str_2)<0) {
        printf("\n1st string str_1 is less than str_2\n");
    }
    printf("\nStr_1 length is %d\nStr_2 length is %d\n",strlen(str_1),strlen(str_2));

    strcat(strcat(str_1," "),str_2);

    printf("\nAdding two string: %s",str_1);

    strcpy(str_2,str_1);
    printf("\n\nCopy from str_1 to str_2: %s",str_2);




    return 0;
}
