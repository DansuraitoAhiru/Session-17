#include <stdio.h>
#include <string.h>
int main(){
	char str[1000], word[1000],longest[1000];
	int len=0,max=0;
	printf("Nhap chuoi: ");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")]=0;
	for(int i=0;str[i] != '\0';i++){
		if(str[i] != ' ' && str[i] != '\0'){
			word[len++]=str[i];
		} else {
		    word[len]='\0';
		    if(len>max){
		    	max=len;
		    	strcpy(longest,word);
		    }
		    len=0;
		    if(str[i]=='\0'){
		    	break;
		    }
		}
	}
	printf("Tu dai nhat: %s\n", longest);
	printf("Do dai: %d\n", max);
}	
