#include <stdio.h>
#include <string.h>
int main(){
	char str1[1000];
	char str2[1000];
	printf("Nhap chuoi 1: ");
	fgets(str1,sizeof(str1),stdin);
	str1[strcspn(str1,"\n")]=0;
	printf("Nhap chuoi 2: ");
	fgets(str2,sizeof(str2),stdin);
	str2[strcspn(str2,"\n")]=0;
	for(int i=0; str1[i] != '\0';i++){
		if(str1[i]>='A' && str1[i]<='Z'){
			str1[i]+=32;
		}
	}
	for(int i=0;str2[i] != '\0';i++){
		if(str2[i]>='A' && str2[i]<='Z'){
			str2[i]+=32;
		}
	}
	if(strcmp(str1,str2)==0){
		printf("2 chuoi giong nhau");
	} else {
		printf("2 chuoi ko giong nhau");
	}
}
