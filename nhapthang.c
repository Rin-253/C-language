//18
#include<stdio.h>
#include<conio.h>
int main(){
	int thang,nam;
	printf("Nhap vao thang la :");
	scanf("%d",&thang);
	printf("Nhap vao nam la :");
	scanf("%d",&nam);
	
	switch(thang){
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("Thang co 31 ngay");
		break;
	case 4:
	case 6:	
	case 11:
	    printf("thang co 30 ngay");
	    break;
	case 2:
	    if((nam%400==0)||(nam%4==0&&nam%100!=0)){
	    	printf("Thang co 29 ngay");
	    	}else{
	    		printf("Thang co 30 ngay");
			}
		 break;
        default:
	    printf("Nhap du lieu khong dung");
		break;	   
			
	}
}
