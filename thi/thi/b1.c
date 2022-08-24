#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n); // dấu hiệu nhập dữ liệu
    if(n > 0){ // dấu hiệu để xác thực dữ liệu
        float kq = 0;
        int i;
        for(i=1; i<=n; i++)
            kq += 1.0/i;
        printf("S(%d) = %0.2f", n, kq);// tính toán và in kết quả
    }else{
        printf("error");
    }

    return 0;
}
