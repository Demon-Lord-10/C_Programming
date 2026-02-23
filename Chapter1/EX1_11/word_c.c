#include <stdio.h>

#define IN 1    //represents inside a word
#define OUT 0   //represents outside a word

int main(void) {
	int c, state;
	int word_count;

    	word_count = 0;
    	state = OUT;
	
	printf("Enter the Input\n");

    	while ((c = getchar()) != EOF) {
        	if (c == ' ' || c == '\t' || c == '\n') {
            		state = OUT;
        	}
        	else if (state == OUT) {
            		++word_count;
            	state = IN;
        	}
    	}

    	printf("\nNumber of words: %d\n", word_count);

    	return 0;
}
