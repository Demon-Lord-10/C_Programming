#include <stdio.h>
#define MAXLINE 1000 

int get_line(char line[], int maxline);
void copy(char to[], char from[]);
int trim(char line[]);
void reversed(char c[],int len);


int main()
{
	int len; /* current line length */
	int count = 0; /* count number of lines */
	char line[MAXLINE]; /* current input line */
	while ((len = get_line(line, MAXLINE)) > 0){
		if((len = trim(line)) > 0){
			reversed(line,len);
			printf("\nReversed Line %d:\n%s\n",count,line);
			++count;
		}
	}
	return 0;
}

/* getline: read a line into s, return length */
int get_line(char s[],int lim)
{
int c, i;
	for (i=0; (c=getchar())!=EOF && c!='\n'; ++i){
		if (i<lim-1)
		{	
			s[i] = c;
			
		}
	}
	
	if (c == '\n') {
		if(i<lim-1)
			s[i] = c;
		++i;
	}
	if(i<lim){
		s[i]='\0';
	}else{
		s[lim-1]='\0';
	}
		return i;
}

/* trim: remove trailing blanks and tabs, return new length */
int trim(char s[])
{
	int i;

	for(i=0; s[i]!='\n' && s[i]!='\0'; ++i)
		;
	--i; 

	while(i >= 0 && (s[i]==' ' || s[i]=='\t'))
		--i;

	s[i+1] = '\n';
	s[i+2] = '\0';

	return i+1; 
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}

void reversed(char c[],int len){
	for(int i=0;i<len/2;i++){
		c[i] = c[len-i-1]^c[i];
		c[len-i-1]=c[len-i-1]^c[i];
		c[i]=c[len-i-1]^c[i];
	}
}
