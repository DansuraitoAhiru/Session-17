#include <stdio.h>
#include <string.h>
int main(){
	int choice,i;
	char str[1000];
	do{
		printf("\n1. In chuoi voi toan bo ky tu chuyen thanh chu hoa");
		printf("\n2. In chuoi voi toan bo ky tu chuyen thanh chu thuong");
		printf("\nNhap lua chon cua ban: ");
		scanf("%d", &choice);
		getchar();
		switch(choice){
			case 1:
				printf("Nhap chuoi: ");
				fgets(str,sizeof(str),stdin);
				str[strcspn(str,"\n")]='\0';
				for(i=0;str[i] != '\0';i++){
					if(str[i]>='a' && str[i]<='z'){
						str[i]-=32;
					} else {
						continue;
				    }
				}
				printf("Chuoi sau chuyen: %s",str);
				break;
			case 2:
				printf("Nhap chuoi: ");
				fgets(str,sizeof(str),stdin);
				str[strcspn(str,"\n")]='\0';
				for(i=0;str[i] != '\0';i++){
					if(str[i]>='A' && str[i]<='Z'){
						str[i]+=32;
					} else {
						continue;
					}
				}
				printf("Chuoi sau chuyen: %s",str);
				break;
			default:
				printf("Ko co lua chon %d", choice);
		}
	} while(choice != 0);
}
