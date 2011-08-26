/* Exercise 1-20. Write a program detab that replaces tabs in the input with the proper number of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n columns. Should n be a variable or a symbolic parameter?
 *
 * */

#include <stdio.h>
#define MAX_LINE 1000
#define TAB_STOP 4
//#define SPACE ' '
#define TAB '\t'
#define SPACE '_'


int getln(char s[], int limit)
{
	int chr, i;
	
	for ( i=0; i < limit-1 && (chr=getchar()) != EOF; ++i)
	{	
		s[i] = chr;
    if ( chr == '\n' ) 
      break;
	}
	s[i] = '\0';
	return i;
}

void detab(char original[], char detabbed[],  int length) 
{

  int currentCol;
  currentCol = 0 ; 
  //spaceOffset = 0;
  int workingLength;
  workingLength = 0;
  int i;
 /* int spacesAdded;
  spacesAdded = 0;
*/
  
  for ( currentCol = 0; currentCol <= length; ++currentCol )
  {
    if (original[currentCol] == TAB ) {
      for (i=0; i <= TAB_STOP; ++i) {
        detabbed[workingLength + i] = SPACE;
      }
      workingLength += TAB_STOP;
    } else {
      detabbed[workingLength] = original[currentCol];
      ++workingLength; 
    }
  }

  

}

int main (){
  char line[MAX_LINE];
  char cleanLine[MAX_LINE];
  int len;

  while ( (len = getln(line, MAX_LINE)) > 0 )
  {
    printf("\nLine::: %s",line);
    detab(line, cleanLine, len);
    printf("\nDETAB:: %s",cleanLine);
  }
  
return 0;
}




