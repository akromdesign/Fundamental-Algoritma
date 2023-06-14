#include<stdio.h>
#include<string.h>

int main(){
	//ASCII
//	printf("%d\n", 'a');
//	printf("%d\n", 'z');
//	printf("%d\n", 'A');
//	printf("%d\n", 'Z');
	
			char str[30];
	
	scanf("%[^\n]", str);
	getchar();
	
	int panjang = strlen(str);
	
	for(int i = 0; i < panjang; i++){
		if(str[i] >= 'a' && str[i] <= 'z'){
			str[i] -= 32;
		}
	}
//	printf("%s", strupr(str));	
//	printf("%s", strlwr(str));
	printf("%s", str);
	
	
//	char str[30];
//	
//	scanf("%[^\n]", str);
//	getchar();
//	
//	int panjang = strlen(str);
//	
//	for(int i = 0; i < panjang; i++){
//		if(str[i] >= 'a' && str[i] <= 'z'){
//			str[i] -= 32;
//		}
//	}
//	printf("%s", str);	

	
//	char str[30];
//	
//	scanf("%[^\n]", str);
//	getchar();
//	
//	int panjang = strlen(str);
//	
//	for(int i = 0; i < panjang; i++){
//		if(str[i] >= 97 && str[i] <= 122){
//			str[i] -= 32;
//		}
//	}
//	printf("%s", str);
	
//	int listAngka[20];
//	char str[20][100];
//	
//	scanf("%s", str[0]);
//	strcpy(str[0], "Halo");
//	printf("%s\n", str[0]); 
	
//	scanf("%s", str);
//	str[1] = 'a';
//	printf("%s\n", str);
	
//	listAngka[0] = 1;
//	printf("%d\n", listAngka[0]);
//	listAngka[0] = 2;
//	printf("%d\n", listAngka[0]);
	
	
	return 0;
}
