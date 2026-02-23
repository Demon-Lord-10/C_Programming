#include <stdio.h>

#define MAX 100
#define OUT 1
#define IN 0



int max(int x,int y){
	if(x>y)
		return x;
	else 
		return y;
}
int main() {
	
	int word[MAX]={0};

	int c;
	int state=OUT;
	int count=0;
	int maxcount=0;
	printf("Enter the Paragraph:\n");
	while((c=getchar())!=EOF){
		if(c==' ' || c=='\t' || c=='\n'){
			if(state==IN){
				state=OUT;
				word[count]++;
				maxcount=max(word[count],maxcount);
			}
			count=0;
		}
		else{
			if(state==OUT){
				state=IN;
			}
			count++;
		}
	}

	if(state == IN){
        	word[count]++;
        	maxcount = max(word[count], maxcount);
    	}

	printf("-----Horizontal------\n");

	for(int i=0;i<MAX;i++){
	if(word[i]==0) continue;
	printf("\ncount %d:",i);
	for(int j=0;j<word[i];j++){
			printf("-");
		}
	}

	printf("\n-------Vertical---------\n");

	for(int i=maxcount;i>=1;i--){
		for(int j=0;j<MAX;j++){
			if (word[j] == 0) continue;
			if(word[j]>=i)
			{
				printf("#\t");
			}
			else
			{
				printf(" \t");
			}
		}
		printf("\n");
	}
	for(int i=0;i<MAX;i++){
	if(word[i]==0) continue;
	printf("len-%2d\t",i);
	}
	printf("\n");
	return 0;
}
