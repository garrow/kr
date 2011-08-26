/* Write a function reverse(s) that reverses the character string s. Use it to write a program that reverses its input a line at a time. */


#include <stdio.h>
#define MAX_LINE 1000

void reverse(char s[], int len) {
  int i, max, midpoint;
  char previous;
  
//  printf("Processing Line: %u %s",len,s);

  max = len - 1;
  midpoint = (max) / 2;
  
  for (i=0; i <= midpoint; ++i) {
    
    previous = s[i];
    s[i] = s[max-i];
    s[max-i] = previous;
//    printf("State %u: p %c == %s\n",i,previous,s);

  
  }
  //s[len]='\n';

}

int getln(char s[], int limit)
{
	int chr, i;
	
	for ( i=0; i < limit-1 && (chr=getchar()) != EOF && chr != '\n'; ++i)
	{	
		s[i] = chr;
	}
	if (chr == '\n') {
		s[i] = chr;
		++i;
	}
	s[i] = '\0';
	return i;
}







int main() {

  char line[MAX_LINE];
  int len;

  while ((len = getln(line,MAX_LINE)) > 0) {
    reverse(line,len);
    printf("%s",line);
    
  }

//  printf("%s",string);

return 0;
}



