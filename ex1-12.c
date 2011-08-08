#include <stdio.h>
#define MAXLINE 1000

char getword(char line[], int length);


int main()
{
	char line[MAXLINE];
	int length;
	char word[MAXLINE];
	char current;
	char last;
	int i;

	while ( (length = getline(line,MAXLINE)) > 0 )	{
		for ( i = 0; i < length; i++ ){
			current = line[i];
			if  (current == ' ' || current == '\t')
			{
				if (!( last == ' ' || last == '\t'))  {
					printf("\n");
				}		
			} else {

			putchar(current);

			}

			last = current;
		}	
	}	



return 0;


}
/*
char getword(char line[], int length) 
{
	int i;
	char word[MAXLINE];
	word = "char-array-word,1000";	
	
	
return word;	

}
*/
int getline(char s[], int limit)
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

