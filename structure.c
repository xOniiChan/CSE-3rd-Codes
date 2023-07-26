#include <stdio.h>
#include <string.h>
struct students {
    int roll;
    char name[1000];
    float gpa;
};

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d",&n);

    struct students s[n];
    int i,j;
    printf("Enter Name,Roll and GPA:\n");
    for(i=0;i<n;i++) {
        scanf("%s %d %f",s[i].name,&s[i].roll,&s[i].gpa);
    }

    printf("\nDisplaying the records some of student.\nRoll\tName\tGPA\n");
    for(j=0;j<n;j++) {
        printf("%s  %d  %.3f\n",s[j].name,s[j].roll,s[j].gpa);
    }

  return 0;
}
