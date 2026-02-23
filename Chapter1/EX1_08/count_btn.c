#include <stdio.h>

int main(){
	int c;
	long bcount = 0;
	long tcount = 0;
	long ncount = 0;
	printf("Enter your Paragraph.\n");

	while((c=getchar())!=EOF){
		if(c=='\n')
		ncount++;
		else if(c=='\t')
		tcount++;
		else if(c==' ') 
		bcount++;
	}
	printf("Number of blanks is %ld, tabs is %ld and newlines is %ld",bcount,tcount,ncount);
}
