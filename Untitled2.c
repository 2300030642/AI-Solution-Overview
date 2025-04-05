#include<stdio.h>
#include<string.h>
int main() {
    int i=0,j=0,k=0;
    char str[50],str1[20]="",str2[20]="",c;
    FILE *fp=fopen("file1.txt","r");
    if(fp==NULL) 
	return 1;
    while((c=fgetc(fp))!=EOF) 
	str[i++]=c;
    str[i]='\0';
    fclose(fp);
    j=0,k=0;
    for(i=0;str[i]!='\0';i++) {
        if(str[i]>='0'&&str[i]<='9') {
            str1[j++]=str[i];
            if(j==10) {
                str1[j]='\0';
                printf("\n%s",str1);
                j=0;
            }
        } else 
		str2[k++]=str[i];
    }
    str2[k]='\0';
    printf("\nNon-digit characters: %s\n",str2);
    return 0;
}

