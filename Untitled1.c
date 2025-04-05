#include<stdio.h>
#include<string.h>
int main(){
	int i=0,j=0,k=0;
	char str[50],str1[20],str2[20],c;
	FILE *fp;
	fp=fopen("file1.txt","r");
	while((c=fgetc(fp))!=EOF){
	str[i++]=c;
	str[i]='\0';
	for(i=0;str[i]='\0';i++){
		if((str[i]>='0')&&(str[i]<='9')){
			str1[j++]=str[i];
		}else{
			if(j==10)
			break;
			else{
				j=0;
				str2[k++]=str[i];
			}
		}
		str1[j]='\0';
		str2[k]='\0';
		if(strlen(str1)==10){
			printf("\n%s",str1);
		}else{
			for(k=0;k<10;k++){
				printf("%c",str2[k]);
			}
		}
		return 1;
	}
}
}
