#include<stdio.h>
int main(){
    int n,i;
    do{
        printf("nhap n :");
        scanf("%d",&n);

    }while(n<0);
    int s = 0;
    for(i=1;i<=n;i++){
        s=s*i;
    }
    printf("Giai thua cua %d!=%d",n,s);
}
