#include <stdio.h>
int main(){
    int n, i;
    do {
        printf("Nhap n>0 :");
        scanf("%d", &n);
    }while (n<0);
    float s;
    s=0;
    for (i=1; i<=n;i++){
        s=s+1/float(i);
    }
    printf("Tong s = %.2f", s);
}
