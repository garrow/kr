/* Write a program to print a histogram of the frequencies of different characters in its input. */

#include <stdio.h>
#define ASCII 128
#define LOW_CHAR 32
#define MAX_CHART_WIDTH 40
#define CHART_CUTOFF_SIGIL_SIZE  5
#define CHART_RENDER_CUTOFF (MAX_CHART_WIDTH - CHART_CUTOFF_SIGIL_SIZE)
#define BAR_CHAR '#'


main()
{
  int charFreq[ASCII];
  int i;
  
  for (i = LOW_CHAR; i < ASCII; ++i) {
    charFreq[i] = 0;
  }

  int c;
  while ((c = getchar()) != EOF) {
    charFreq[c]++;
  }
  
  int freq;
  for (i = LOW_CHAR; i < ASCII; ++i) {
    freq = charFreq[i];
    if (freq > 0) {
      putchar(i);
      printf(" | %3u | ",freq);

      int row = 0;
      for ( row = 0 ;row <= freq ; ++row) {
        if ( freq > MAX_CHART_WIDTH \
          && row == CHART_RENDER_CUTOFF ) 
        {
          printf(" %3u ",freq);
          freq = freq - CHART_CUTOFF_SIGIL_SIZE;
          freq %= MAX_CHART_WIDTH;
        }
        putchar(BAR_CHAR); 
      }
      putchar('\n');
    }
      
  }



}
