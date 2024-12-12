#include <iostream>
#include <stdio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int number, sum;
	printf("Nhap vao so nguyen co 4 chu so: ");
	scanf("%ld", &number);
    sum=sum+(number/1000)+((number%1000)/100)+((number%100)/10)+(number%10);
	printf("Tong = %d",sum);
	return 0;
}
