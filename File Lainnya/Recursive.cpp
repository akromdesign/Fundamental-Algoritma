#include<stdio.h>

void helloworld(int i){
	
	if(i == 5) return;

	helloworld(i+1);
	printf("%d\n", i);	
//	printf("Hello");
	
}

int main(){
	
	helloworld(0);
	
	return 0;
}
//void helloWorld(int i){
//	if(i == 0) return 0;
//	if(i == 1) return 1;
//	
//	return fibonacci(i-1) + fibonacci(i-2);
////	if(i == 5) return;
////	
////	helloWorld(i+1);
////	printf("%d\n", i);
//	
//}
//
//int main(){
//
//	int f = fibonacci(5);
//	printf("%d", f);
//	fibonacci(5);	 
//	helloWorld(0);
//	
//	return 0;
//}
