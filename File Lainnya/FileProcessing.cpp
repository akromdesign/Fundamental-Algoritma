#include<stdio.h>

int main(){
	
	//Database
	//Filebase
	//read, write, oppend
	//r -> read
	//w -> write
	//a -> append
	//r+ -> read,write
	//w+ -> read,write
	//a+ -> append, read
	
	//open, process, close
	
	char txt[200];
	FILE *fp;
	
	fp = fopen("data.txt", "a");
	
	fprintf(fp, "Hello World!");
	rewind(fp);
//	fscanf(fp, "%[^\n]", txt);
//	printf("%s", txt);
	
	fclose(fp); 
	
	return 0;
}
