#include <stdio.h>

int main() {
    int c;

    printf("Enter your paragraph (Ctrl+D to finish):\n");

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
        	putchar('\\');
		putchar('t');
        }
	else if (c == '\n') {
        	putchar('\\');
		putchar('n');
        }	
	else if (c == '\\') {
        	putchar('\\');
        }
	else putchar(c);
    }

    return 0;
}
