#include <stdio.h>
 
int main(){
    int n, tmp;
    scanf("%d", &n);
    int dn = 0;
    while(n > 0){
        tmp = n % 10;
        dn = dn * 10 + tmp;
        n = n / 10;
    }
    printf("dao nguoc la %d", dn);
}
