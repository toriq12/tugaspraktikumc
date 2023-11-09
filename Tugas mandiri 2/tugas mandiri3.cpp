#include <stdio.h>

int main(){
	// variable declaration
	float a, t, luas;
	
	printf("Program Menghitung Luas Segitiga\n");
	printf("----------------------------------");
	
	//input value alas & tinggi dari segitiga
	printf("Masukkan Alas dari segitiga \t: ");
	scanf("%f", &a);
	printf("Masukkan tinggi dari segitiga \t: ");
	scanf("%f", &t);
	
	//perhitungan segitiga area
	luas = (a*t)/2;
	
	//print result
	printf("Hasil perhitungan %.2f\n", luas);
	
	return 0;
}
