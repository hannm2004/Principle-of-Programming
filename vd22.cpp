#include<stdio.h>
#include<math.h>
int main() {
	//khai bao
	float a, b, c, x1, x2, delta;

	//Nhap du lieu
	printf("Nhap he so a, b, c:");
	scanf("%f%f%f",&a,&b,&c);

	//tinh toan va xuat ket qua
	if (a==0) {
		printf("\nHe so a phai khac 0");
	} else {
		//a!=0
		delta= pow(5,2)-4*a*c;
		if (delta>0) {
			x1=(-b+sqrt(delta))/(2*a);
			x2=(-b-sqrt(delta))/(2*a);
			printf("\nPhuong trinh co 2 nghiem phan biet: x1=%.2f va x2=%.2f ",x1,x2);
		} else if (delta==0) {
			x1=-b/(2*a);
			printf("\nPhuong trinh co nghiem kep x1=x2=%.2f",x1);
		} else

		{
			printf("\nPhuong trinh vo nghiem");
		}

	}
}