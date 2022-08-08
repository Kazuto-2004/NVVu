#include <stdio.h>
int main(){
	int n;
	printf("Nhap gia tri: ");
	scanf("%d",&n);
	int s,i;
	s=0;
	i=0;
	
	while(i<=n){
		s+=i;	
		i++;	
	}
	printf("Tong gia tri la: %d",s);
}
