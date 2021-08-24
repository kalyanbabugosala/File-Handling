#include <stdio.h>
#include <string.h>

int main(){
FILE *fp;
FILE *cp;
char ch;

fp = fopen("Text1.txt","r");
cp = fopen("Text2.txt","r+");

ch = fgetc(fp);

while(ch!=EOF){
    fputc(ch,cp);
    ch = fgetc(fp);
}
fclose(fp);
fclose(cp);

return 0;
}
