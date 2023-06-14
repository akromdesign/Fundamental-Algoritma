#include<stdio.h>

int getNumber(){
	//....
	return 5;
}

int sum(int fitst, int second){
	*first = 4;
//	printf("Alamat = %d\n", first);
	int total = first = second;
	return total;
}

//void printHelloWorld(){
//	printf("Hello World");
//}

int main(){
	
	//Pointer
//	int a = 0;
//	int *p;
//	int **p2;
//	p = &a;
//	p2 = &p;
//	
//	printf("%d\n", &a);
//	printf("%d\n", *p);
//	printf("%d\n", *p2);
//	printf("%d\n", *a; 
	
//	printHelloWorld();

	//Passing by value
	//Passing by reference

	int a = getNumber();
	printf("%d", getNumber());
	int first = 3;
	int second = 5;
	int hasilSum = sum(getNumber(), second);
//	int hasilSum = sum(3, 5);
//	printf("%d\n", hasilSum);
	print("%d", first);
	
	return 0;
}
