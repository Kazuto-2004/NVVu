#include <stdio.h>
int main(){
	int num;
	
	printf("nhap vao mot so: ");
	scanf("%d", &num);
	if (num > 0) 
       printf ("%d la so duong", num);
	else if ( num < 0)
	   printf ("%d khong phai so duong", num);
	  
}
