/* Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines. */

#define MAX_LINE 10
#include <stdio.h>


int main() {
  int c;
  char buffer[MAX_LINE];
  int i;
  int lastChar;

  i = 0;
  lastChar = 0;


  while ((c = getchar()) != EOF) {
    if (i < MAX_LINE) {
      buffer[i] = c;
    }  else {
      printf("Error: Line too long\n");
      return 1;
    }

    if ( c != ' ' && c != '\t' && c != '\n' ) {
      lastChar = i;
    }
    
    

    ++i;
    // newline
    if (c = '\n') {
      
      int j;
      for ( j=0; j < lastChar; ++j) {
        putchar(buffer[j]);
      }


      
      i = 0;
      lastChar = 0;
    }

  }



return 0;
}
