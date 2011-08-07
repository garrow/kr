#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* Print the longest input line */
main()
{
	int length;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;

	while ( (length = getline(line, MAXLINE)) > 0 )	{
		if ( length > max ) {
			max = length;
			copy(longest, line);
		}		
	}
	if (max > 0) {
		printf("%s",longest);
	}
	return 0;
}


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

void copy(char to[], char from[])
{
	int i;
	
	i=0;
	while ( (to[i] = from[i]) != '\0' ){
		++i;
	}
}

