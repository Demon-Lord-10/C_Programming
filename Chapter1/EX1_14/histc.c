#include <stdio.h>
#define MAX 128  

int main() {
    	int freq[MAX] = {0};
    	int c;
    	int maxfreq = 0;

    	printf("Enter text (Ctrl+D / Ctrl+Z to end):\n");

    	while((c = getchar()) != EOF) {
        	if (c >= 32 && c < MAX)  
            	freq[c]++;
    	}

    	for(int i = 32; i < MAX; i++){
        	if (freq[i] > maxfreq)
            		maxfreq = freq[i];
	}

    	printf("\n------Horizontal------\n");
    	for(int i = 32; i < MAX; i++) {
        	if (freq[i] == 0) continue;
        		printf("'%c' : ", i);

        	for(int j = 0; j < freq[i]; j++)
        		printf("-");

        	printf(" %d\n", freq[i]);
    	}

    	printf("\n------Vertical------\n");
    	for(int i = maxfreq; i >= 1; i--) {
        	for (int j = 32; j < MAX; j++) {
            		if (freq[j] == 0) continue;
            		if (freq[j] >= i)
                		printf("#\t");
            		else
                		printf(" \t");
        	}
        	printf("\n");
    	}

    	for(int i = 32; i < MAX; i++) {
		if (freq[i] == 0) continue;
        	printf("%c\t", i);
    	}
    	printf("\n");

    	for(int i = 32; i < MAX; i++) {
        	if (freq[i] == 0) continue;
        	printf("%-4d\t", freq[i]);
    	}
    	printf("\n");

    	return 0;
}
