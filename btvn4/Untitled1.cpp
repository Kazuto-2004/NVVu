#include <stdio.h>
int main(){
		int n;
		long s = 0;
		do {
			printf("\n nhap vao so nguyen n lon hon 0 : ");
			scanf("%d", &n);
			if (n <= 0)
			{
	        printf("\n n la so lon hon 0 vui long nhap lai");
	    }
	}while(n <= 0);
	 printf("Cac uoc so cua %d la: ",n);
  for(int i = 1; i <= n; i++)
  {
    if(n % i == 0)
    {
      printf("%4d", i);
      s = s + i;
    }
  }
 printf("\n cong cac uoc cua %d la %d là: %ld", n, s);
	
}
