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
	strcat(str1, " ");
	strcat(str1, str2);
	printf("Chuoi sau khi noi: %s",str1);
}
