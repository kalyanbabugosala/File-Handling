#include <stdio.h>
#define MAX_LEN 1024

int main() {
  /*Read the file.*/

  char ch;
  int char_count = 0, word_count = 0, line_count = 0;
  int in_word = 0;
  char file_name[MAX_LEN] = "Word_Line_Char_Count.txt";
  FILE *fp;

  fp = fopen(file_name, "r");

  if(fp == NULL) {
    printf("Could not open the file %s\n", file_name);
    return 1;
  }

  while ((ch = fgetc(fp)) != EOF) {
    char_count++;

    if(ch == ' ' || ch == '\t' || ch == '\0' || ch == '\n') {
      if (in_word) {
        in_word = 0;
        word_count++;
      }

      if(ch = '\0' || ch == '\n') line_count++;

    } else {
      in_word = 1;
    }
  }

