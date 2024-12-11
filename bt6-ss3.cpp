#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int canh, chieucao;
	float dientich;
	printf("Nhap vao do dai canh: ");
	scanf("%d", &canh);
	printf("Nhap vao chieu cao tuong ung canh: ");
	scanf("%d", &chieucao);
	printf("Dien tich tam giac la %.2f\n", dientich=0.5*canh*chieucao);
	return 0;
}
