#include<stdio.h>
int main(){
    int n;
    int chia;
    int s = 0;
    printf("Nhap n: ");
    scanf("%d",&n);
    for(;n!=0;){
        chia = n % 10;
        s += chia;
        n /= 10;
    }    
    printf("%d",s);
}
