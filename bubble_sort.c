//String bubble sort
#include <stdio.h>

void sort(int a[],int num) {
    int r,c,x,temp;
    for(r=0;r<num;r++) {
        for(c=r+1;c<num;c++) {
            if(a[r]>a[c]) {
                temp=a[r];
                a[r]=a[c];
                a[c]=temp;
            }
        }
    }

    printf("\n\nprinting ascending order of an array after sorting:\n ");

    for(x=0;x<num;x++) {
        printf("%d ",a[x]);
    }
}


int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int i,j,arr[n];
    printf("\nEnter array value: ");
    for(j=0;j<n;j++) {
        scanf("%d",&arr[j]);
    }
    printf("\n\nPrinting elements of an array before the sorting:\n");

    for(i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    sort(arr,n);


    return 0;
}
