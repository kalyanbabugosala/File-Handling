#include <stdio.h>
#include <string.h>

int main()
{
FILE *fp;
fp = fopen("WriteFile.txt","w");
char str[100];
printf("Enter some text to save in a file : ");
gets(str);

fputs(str,fp);
//fprintf(fp,"%s",str);

fclose(fp);

}
