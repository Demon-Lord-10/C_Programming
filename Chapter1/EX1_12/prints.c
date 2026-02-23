#include <stdio.h>

#define IN 1    //represents inside a word
#define OUT 0   //represents outside a word

int main(void) {
	int c, state;

	state = OUT;
	printf("Enter the Input\n");
    	while ((c = getchar()) != EOF) {
        	if (c == ' ' || c == '\t' || c == '\n') {
			if(state == IN){
           			state = OUT;
				putchar('\n');
			}
        	}
        	else{ 
			if (state == OUT) {
            			state = IN;
			}
			putchar(c);
        	}
    	}

    	return 0;
}
