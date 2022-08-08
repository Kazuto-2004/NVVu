int main(){
	int ngay,thang;
	printf("Nhap ngay =",ngay);
	scanf("%d",&ngay);
	printf("Nhap thang =",thang);
	scanf("%d",&thang);
	
	int thu,n,t;
	ngay = n;
	thang=t;
	n <= 31;
	
	if(t==1){
	ngay = n;
	thu = ngay%7;
		
	}else if(t==2){
	ngay = n + 31;
	thu = ngay%7;
		
	}else if(t==3){
		ngay = n + 31 + 28;
		thu = ngay%7;
		
	}else if(t==4){
		ngay = n + 31 + 28 + 31;
		thu = ngay%7;
		
	}else if(t==5){
		ngay = n + 31 + 28 + 31 + 30;
		thu = ngay%7;
		
	}else if(t==6){
		ngay = n + 31 + 28 + 31 + 30 + 31;
		thu = ngay%7;
		
	}else if(t==7){
		ngay = n + 31 + 28 + 31 + 30 + 31 + 30;
		thu = ngay%7;
		
	}else if(t==8){
		ngay = n + 31 + 28 + 31 + 30 + 31 + 30 + 31;
		thu = ngay%7;
		
	}else if(t==9){
		ngay = n + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
		thu = ngay%7;
		
	}else if(t==10){
	    ngay = n + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
	    thu = ngay%7;
	    
	}else if(t==11){
		ngay = n + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
		thu = ngay%7;
		
	}else if (t==12){
			ngay = n + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
			thu = ngay%7;
	}
	 if(thu == 1){
	 	printf("thu 2");
	 }
	 else if(thu == 2){
	 	printf("thu 3");
	 }
	 else if(thu == 3){
	 	printf("thu 4");
	 }
	 else if(thu == 4){
	 	printf("thu 5");
	 }
	 else if(thu == 5){
	 	printf("thu 6");
	 }
	 else if(thu == 6){
	 	printf("thu 7");
	 }
	 else if(thu == 7){
	 	printf("chu nhat");
	 }
	 printf("\ngay thu %d trong nam", ngay);
}
