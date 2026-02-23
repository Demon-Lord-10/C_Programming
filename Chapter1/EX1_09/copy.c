#include <stdio.h>

int main(){
	printf("Enter your paragraph:\n");

	int c,last_c;
	
	while ((c = getchar()) != EOF) {
        	if (c == ' ' && last_c == ' ') {
            		continue; 
        	}

        	putchar(c);
        	last_c = c; 
    	}
	return 0;
}
