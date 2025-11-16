#include <stdio.h>
#include <string.h>
int main(){
	char str1[1000], str2[1000];
	printf("Nhap chuoi A: ");
	fgets(str1,sizeof(str1),stdin);
	str1[strcspn(str1,"\n")]=0;
	printf("Nhap chuoi B: ");
	fgets(str2,sizeof(str2),stdin);
	str2[strcspn(str2,"\n")]=0;
	int len1=strlen(str1);
	int len2=strlen(str2);
	int found=0;
	for(int i=0;i<=len1-len2;i++){
		int match=1;
		for(int j=0;j<len2;j++){
			if(str1[i+j]==str2[j]){
			    match=0;
			    break;
			    }
		}
	    if(match==1){
		    found=1;
		    break;
	    }
	}
	if(found){
		printf("Co\n");
	} else {
		printf("Khong\n");
	}
}
