/* Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging. */

#include <stdio.h>
#define MAX_WORD_LENGTH 100

int main() {

	int wordLen[MAX_WORD_LENGTH];
  char c;
  int currentWordLen = 0;
  int i; 
  int whitespace = 0;

  for (i = 0; i < MAX_WORD_LENGTH; i++) {
    wordLen[i]=0;
  }

  // begin
  while ((c = getchar()) != EOF ){
    if (c != ' ' && c != '\t' && c != '\n') {
      currentWordLen++;
    } else {
      whitespace++;
      wordLen[currentWordLen]++;
      currentWordLen=0;
    }
    //putchar(c);
  }

  int chartWordLen = 0;
  //printf("Len | Freq | Chart \n");
  printf("Len | Chart \n");
  for (i=1; i < MAX_WORD_LENGTH; i++) { 
    if ((chartWordLen = wordLen[i]) > 0 ) {
      printf( "%3u | ",i,chartWordLen);

      for (; chartWordLen > 0; chartWordLen--){
        putchar('=');
      }
      putchar('\n');
    }
  }
  
  printf("Total whitespace: %u\n", whitespace);
  
	


return 0;
}





