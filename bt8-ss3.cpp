#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int number, renumber=0;
	printf("Nhap vao so nguyen co 4 chu so: ");
	scanf("%ld", &number);
	if(number<1000 || number>9999)
	{
		printf("So nhap vao phai co 4 chu so!");
	}
	while(number!=0)
	{
		int temp=number%10;
		renumber=renumber*10+temp;
		number/=10;
	}
	printf("So sau khi dao nguoc: %d", renumber);
	return 0;
}
