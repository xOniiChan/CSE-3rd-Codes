#include <stdio.h>
int main() {
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    int * ptr = arr;
    int *p=ptr;

    printf("\nEnter elements in array:\n");
    while(ptr<p+n)
    {
        scanf("%d", ptr);
        ptr++;
    }


    ptr--;
    printf("\nArray elements: ");
    while(ptr>=p)
    {
        printf("%d ", *ptr);

        ptr--;
    }

    return 0;
}
