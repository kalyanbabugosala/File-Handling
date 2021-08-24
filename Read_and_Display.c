#include <stdio.h>
#include <string.h>

int main(){

FILE *fp;
char ch;

fp = fopen("ReadandDisplay.txt","r");

ch = fgetc(fp);
while(ch!=EOF){
    printf("%c",ch);
    ch = fgetc(fp);
}

fclose(fp);

}
