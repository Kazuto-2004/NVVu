
#include "stdio.h"
int main(){
    int n;
    scanf("%d", &n);
    if(n > 0){
        float kq = 0;
        int i;
        for(i=1; i<=n; i++)
            kq += 1.0/i;
        printf("S(%d) = %0.2f ", n, kq);
        
    }else{
        printf("error");
    }
    return 0;
}
