#include <iostream>
#include <stdio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int number, sum=0, i=0;
	printf("Nhap vao so nguyen co 4 chu so: ");
	scanf("%ld", &number);
	if(number<1000 || number>9999)
	{
		printf("So nhap vao phai co 4 chu so!");
	}
	while(i<3)
	{
		sum+=number%10;
	    number/=10;
	    i++;
	}
	sum+=number;
	printf("Tong = %d",sum);
	return 0;
}
