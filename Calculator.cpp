#include <stdio.h>

int main(){
	int a, b;
	a = 5;
	b = 10;


	float hasil_pembagian = (float)a/b;

	printf("Hasil pertambahan: %d", a+b);
	printf("\nHasil pengurangan: %d", a-b);
	printf("\nHasil perkalian: %d", a*b);
	printf("\nHasil pembagian: %.2f", hasil_pembagian);

	return 0;
}

