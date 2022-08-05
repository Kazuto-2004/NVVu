#include <stdio.h>
int main(){
	int a ,b;
	
	printf("nhap so a: ");
	scanf("%d", &a);
	printf("nhap so b: ");
	scanf("%d", &b);
	
	if ( a > b) 
	   printf (" so lon nhat la %d", a );
	else if (a<b)
	   printf (" so lon nhat la %d", b);     
}
