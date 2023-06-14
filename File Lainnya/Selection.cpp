#include<stdio.h>

int main(){
	
//	SELECTION
	/*
		1. If, else if, else
		2. Switch case
		3. Ternary if
	*/
	
//	int angka = 0;
	
	// Kalau angka 0 maka print "nol", kalau angka ganjil print "ganjil"
	// Kalau angka genap print "genap"
//	if(angka == 0){
//		printf("nol");
//	}
//	else if(angka%2 == 1){
//		printf("ganjil");
//	}
//	else if(angka%2 == 0){
//		printf("genap");
//	}
	//CTRL + /
	
//	int angka = 3;
//	switch(angka){
//		case 0:
//			printf("nol");
//		case 1:
//			printf("satu");
//		case 5:
//			printf("lima");
//			break;
//		default:
//			printf("Selain nol satu dan lima");
//	}
	
//	int angka = 3;
	
	//kondisi ? benar : salah
//	printf("%s", (angka%2 ==0? "genap" : "ganjil"));
//	int angka = 1;
//	printf("%s", (angka < 2? "lebih kecil dari 2" :
//					angka > 2 ? "lebih besar dari 2"; "2"));

	int input;
	int batasBawah, batasAtas;
	
	scanf("%d", &input);
	scanf("%d %d", &batasBawah && input <= batasAtas);
	
	if(input >= batasBawah && input <== batasAtas){
		printf("%d diantara %d dan %d", input, batasBawah, batasAtas);
	}
	else
		printf("%d bukan diantara %d dan %d", input, batasBawah, batasAtas);
	
	return 0;
}
