#include<stdio.h>

int main(){
	
	//Repetition / Looping
	//for, while, do while
	//break, continue
	
//	for(int i = 1; i <= 10; i+=2){
//		if(i == 5) break;
		
//	for(int i = 1; i <= 10; i+=2){
//		if(i == 5) continue;
//		
//		printf("%d\n", i);
//	}
//	printf("while:\n");
//	int j = 1;
//	while(j <= 10){
//		printf("%d\n", j++);
//	}
//	
//	int k = 1;
//	do {
//		printf("%d\n", k++);
//	}while(k <= 10);
	int size = 10;
	scanf("%d", &size);	
	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			if(i == 0 || i == size-1 || j == size - 1 || i == size-1){
				print("*");
			}
			else{
				printf(" ");
			}
			
		}
		printf("\n");
	}
	

	return 0;
}
