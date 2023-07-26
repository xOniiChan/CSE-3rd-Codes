#include<stdio.h>
#include<string.h>
int main()
{
    int f_name[100], s_name[100], t_name[100], name[100];
    printf("Enter First_Name:");
    scanf("%s", &f_name);
    printf("Enter Second_Name:");
    scanf("%s", &s_name);
    printf("Enter Third_Name:");
    scanf("%s", &t_name);
    strcpy(name, f_name);
    strcat(name, s_name);
    strcat(s_name,"");
    strcat(name, t_name);
    strcat(t_name, "");

    printf("The Name is: %s", name);
    return 0;
}
