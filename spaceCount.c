#include <stdio.h>

main()
{
	int c, i, bc, tc, nlc;
	bc = tc = nlc = i = 0;

	while((c = getchar()) != EOF)
	{
		if(c == ' ')
			bc++;
		else if(c == '\t')
			tc++;
		else if(c == '\n')
			nlc++;

			//comments about nothing testing
	}
	printf("There are %d blanks, %d tabs and %d newlines in this text\n", bc, tc, nlc);
	
	return 0;
}
