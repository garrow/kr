/* Write a program to print all input lines that are longer than 80 characters. */

#define MAX_LINE 80
#include <stdio.h>



int main(){

  char buffer[MAX_LINE];
  int c, i;

  i = 0;

  while ((c = getchar()) != EOF) {
    // buffer first MAX_LINE chars, (80)
    if ( i < MAX_LINE ) {
      buffer[i] = c;
    } else if ( i == MAX_LINE )  {
      // print out buffer
      int j;
      for (j=0;j<MAX_LINE;++j){
        putchar(buffer[j]);
      }
      putchar(c);
    // Keep outputting line
    } else if (i > MAX_LINE) {
      putchar(c);
    }

    //increment the column 
    ++i;
    // reset line if newline
    if (c == '\n')
      i = 0;
  }


  return 0;

}


