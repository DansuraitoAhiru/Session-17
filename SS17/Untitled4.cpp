#include <stdio.h>
#include <string.h>
int main(){
	char str[1000],x;
	printf("Nhap chuoi: ");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")]='\0';
	printf("Nhap ky tu can xoa: ");
	scanf("%c", &x);
	int j=0;
	for(int i=0;str[i] != '\0';i++){
		if(str[i] != x){
			str[j]=str[i];
			j++;
		}
	}
	str[j]='\0';
	printf("Chuoi sau khi xoa: %s", str);
}
