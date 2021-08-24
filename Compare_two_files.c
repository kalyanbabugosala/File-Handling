#include <stdio.h>
#define MAX_LEN 1024

void filecomparision(char file_name[MAX_LEN])
{
  char ch;
  int char_count = 0, word_count = 0, line_count = 0,in_word = 0;

    //"Word_Line_Char_Count.txt";
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

  printf("In the file %s:\n", file_name);
  printf("Number of characters: %d.\n", char_count);
  printf("Number of words: %d.\n", word_count);
  printf("Number of lines: %d.\n\n", line_count+1);
  return 0;
  }

