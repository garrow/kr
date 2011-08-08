/* Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging. */
// vertical orientation
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
  printf("Len | Freq | Chart \n");
  //printf("Len | Chart \n");
  for (i=1; i < MAX_WORD_LENGTH; i++) { 
    if ((chartWordLen = wordLen[i]) > 0 ) {
      printf( "%3u | %4u | ",i,chartWordLen);

      for (; chartWordLen > 0; chartWordLen--){
        putchar('=');
      }
      putchar('\n');
    }
  }


  int maxfreq = 0;
  int maxword = 0;
  chartWordLen = 0;
  for (i=0; i < MAX_WORD_LENGTH; i++) { 

    chartWordLen = wordLen[i];

    if ( chartWordLen > 0) {
      if (chartWordLen > maxfreq) {
        maxfreq = chartWordLen;
      }
      if ( i > maxword ) {
        maxword = i;
      }
    }    
  }
  printf("maxfreq :%u\n",maxfreq); 
  printf("maxword :%u\n",maxword); 
  int row;
  int column;
  for ( row = maxfreq ; row > 0; row-- ) {
    for ( column = 0; column < maxword ; column++ ){
      putchar( (wordLen[column] == row ) ? '#' : '_'); 
    
    }
    putchar('\n');

  }


  
  printf("Total whitespace: %u\n", whitespace);
  
	


return 0;
}





