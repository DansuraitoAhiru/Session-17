#include <stdio.h>
#include <string.h>
int main(){
	char str[1000];
	printf("Nhap chuoi: ");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")]='\0';
	int size=strlen(str);
	char reverse[size];
	printf("Chuoi dao nguoc: ");
	for(int i=0;i<size;i++){
		reverse[size-1-i]=str[i];
	}
	printf("%s", reverse);
	if(strcmp(str,reverse)==0){
		printf("\n%s la palindrome", str);
	} else {
		printf("\n%s ko la palindrome", str);
	}
}
