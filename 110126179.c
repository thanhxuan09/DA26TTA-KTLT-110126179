#include<stdio.h>


int main()
{
	float a,b;
	float tong,hieu,tich,thuong;

	
	printf("nhap a: ");
	scanf("%f" ,&a);
	
	
	printf("nhap b: ");
	scanf("%f" ,&b);
	
	tong = a + b  ;
	printf("tong = %.02f\n" ,tong);
	
	hieu = a - b   ;
	printf("hieu = %.02f\n" ,hieu);
	
	tich = a * b   ;
	printf("tich = %.02f\n" ,tich);
	

if (b!=0)
    
{	
      thuong = a / b   ;
    printf("thuong = %.02f\n" ,thuong);
}

else 
{ 
	printf("thuong = khong the chia cho 0");
}

return 0;
}

