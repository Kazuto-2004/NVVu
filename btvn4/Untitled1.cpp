#include <stdio.h>
int main (){
	int i,n ;
	printf("nhap n");
	scanf("%d",&n);
	
	while(n<=0);
	printf("Cac so nguyen le nho hon %d: ",n);
	for(i=1;i<=n;i++){
		if(i%2 == 1){
		printf("%d ",i);
	}
  }
	
	
}
