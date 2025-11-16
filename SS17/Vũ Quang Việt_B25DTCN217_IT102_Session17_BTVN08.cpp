#include <stdio.h>
#include <string.h>

int main(){
	char password[1000];
	int capitalWord= 0;
	int normalWord= 0;
	int number = 0;
	int special = 0;
	
	printf("Nhap pass: ");
	fgets(password,sizeof(password),stdin);
	password[strcspn(password, "\n")] = 0;
	
	if(strlen(password )< 8){
		printf("Mat khau khong hop le, yeu cau nhap lai");
		
	}
	
	for(int i = 0; i < strlen(password); i ++){
		if(password[i] >= 'A'  && password[i] <= 'Z'){
			capitalWord = 1;
		}else if(password[i] >= '0' && password[i] <= '9'){
			number = 1;
			
		}else if(password[i] >= 'a' && password[i] <= 'z'){
			normalWord = 1;
		}else{
			special = 1;
		}
	}	
	if(capitalWord ==1 &&normalWord==1 &&number ==1&&special == 1){
		printf("Hop le!");
	}else{
		printf("Khong hop le!");
	}
	
}
