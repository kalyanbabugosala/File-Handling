#include <stdio.h>
#include <string.h>

int main(){

FILE *fp;
fp = fopen("AppendandWrite.txt","a");
char str[100];
printf("Enter the text to append into a file : ");
gets(str);

fputs(str,fp);

fclose(fp);

}
