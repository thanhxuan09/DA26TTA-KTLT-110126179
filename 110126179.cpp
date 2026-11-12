#include <stdio.h>

int main ()
{
	float a, b;
	float tong, hieu, tich, thuong;
	
	
	printf("Nhap gia tri a:");
	scanf("%f",&a);
	
	printf("Nhap gia tri b:");
	scanf("%f",&b);
	
	tong=a+b;
	printf("Tong a+b=%.02f\n",tong);
	
	hieu=a-b;
	printf("Hieu a-b=%.02f\n", hieu);
	
	tich=a*b;
	printf("Tich a*b=%.02f\n", tich);
  if(b!=0)
{	
    thuong=a/b;
      printf("Thuong a/b=%.02f\n", thuong);
} else {
      printf("Khong the chia het cho 0");}
      
    return 0; 
	}
	
	
	
