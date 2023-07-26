#include <stdio.h>
int main() {
   char ch;
   FILE *ptr;

   if ((ptr = fopen("D:\\Mominur\\text.txt","r")) == NULL){
       printf("Error! opening file");
       exit(1);
   }
   do {
        ch = fgetc(ptr);
        printf("%c", ch);
    } while (ch != EOF);
    fclose(ptr);

    return 0;
}
