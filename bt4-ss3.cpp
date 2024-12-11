#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float toan, van, anh, sum, avg;
	printf("Nhap vao diem toan: ");
	scanf("%f", &toan);
	printf("Nhap vao diem anh: ");
	scanf("%f", &anh);
	printf("Nhap vao diem van: ");
	scanf("%f", &van);
	printf("Tong diem cua 3 mon la %.2f\n", sum=toan+anh+van);
	printf("Diem trung binh cua 3 mon la %.2f\n", avg=(toan+anh+van)/3.0);
	return 0;
}
