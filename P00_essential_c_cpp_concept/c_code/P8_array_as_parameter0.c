#include <stdio.h>
// ** array alaways pass by address never by value
void fun(int a[], int n) {
    // int k = sizeof(a) / sizeof(a[0]);// it will give 8/4=2 , 64bit arch 8 byte pointer and int 4byte
    for (int i = 0; i < n; i++)
        printf("%d ",a[i]);
    printf("\n");
}
void fun1(int *a, int n) {
  
    a[0] = 20;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("\n");

    //e.g1
    printf("e.g1\n");
    fun(arr, n);
    printf("\n");
    for (int x=0; x<n;x++)
        printf("%d ",arr[x]);
    printf("\n");

    //e.g2
    printf("\ne.g2\n");
    fun1(arr,n);
    for (int x=0; x<n;x++)
        printf("%d ",arr[x]);
    printf("\n");
    return 0;
}