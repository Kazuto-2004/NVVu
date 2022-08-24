#include <stdio.h>

void reverseArray(int* a, int n){
    int i;
    for(i=0; i<n/2; i++){
        int t = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = t;
    }
}
int main()
{
    int n, i;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("\nMang nhap: \n");
    for(i=0; i<n; i++)
        printf("%d ", a[i]);
    printf("\nSau: \n");
    reverseArray(a, n);
    for(i=0; i<n; i++)
        printf("%d ", a[i]);
    return 0;
}
