#include <stdio.h>
int main(){
    int num;
  
    printf("Nhap mot so: ");
    scanf("%d", &num);
    if (num > 0)
        printf("%d la so duong ", num);
    else if (num < 0)
        printf("%d la so am ", num);
    else
        printf("0 la so khong duong va khong am");
}

