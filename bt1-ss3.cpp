#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char name[50];
	printf("Hay nhap ten cua ban: ");
	fgets(name, sizeof(name), stdin);
	printf("Xin chao %s \n", name);
	return 0;
}
