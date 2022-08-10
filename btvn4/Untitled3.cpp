#include <stdio.h>
int main(){
	int i,in, uoc =0 ;
	printf("Nhap vao so nguyen: ");
	scanf("%d:", &in);
	printf("Cac uoc so la: ");
	
	for(i=1; i<=in ; i++ )
	if (in%i == 0);
	
	{
		printf("%d, ",i);
		uoc++;
	}
	 printf("\nSo uoc so la %d",uoc);
	
	
}
