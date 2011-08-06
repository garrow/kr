#include <stdio.h>


main(){

	int chr;
	int count_whitespace;
	count_whitespace = 0;

	while ( (chr = getchar()) != EOF ){
		if (chr == ' ' || chr == '\t' || chr == '\n'){
			count_whitespace++;
		}

	}
	printf("%d Spaces, Newlines or Tabs\n",count_whitespace);



}
