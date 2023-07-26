#include <stdio.h>
int main() {
    int a[10],n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int t=0;
    while(n>0) {
        a[t]=n%2;
        n=n/2;
        t++;
    }

    int i,j;
    if (t==6) {
        for(i=t-1;i>=0; i--) {
            printf("%d",a[i]);
        }
    }
    else{
        int sizes=6-t,k;
        for(j=0;j<sizes; j++) {
            printf("0");
        }
        for(k=t-1; k>=0; k--) {
            printf("%d",a[k]);
        }
    }


    return 0;
}
