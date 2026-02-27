#include <stdio.h>

#define MAXLINE 1000 /* maximum input line length */

int get_line(char line[], int maxline);
void copy(char to[], char from[]);
int trim(char s[]);
/* print the longest input line */
int main()
{
	int len; /* current line length */
	int count = 1; /* count number of lines */
	char line[MAXLINE]; /* current input line */

	while ((len = get_line(line, MAXLINE)) > 0){
		if(trim(line)>0){
		printf("\nLine: %d\t%s\n",count,line);
		count++;
		}
	}
	return 0;
	}

/* getline: read a line into s, return length */
int get_line(char s[],int lim)
{
int c, i,f_b=0,f_t=0;
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

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}

int trim(char s[])
{
	int i;

	for(i=0; s[i]!='\n' && s[i]!='\0'; ++i);

	--i; /* step back to last character */

	while(i >= 0 && (s[i]==' ' || s[i]=='\t'))
		--i;

	/* i is now at last non-blank char, or -1 if all blank */
	s[i+1] = '\n';
	s[i+2] = '\0';

	return i+1; /* returns 0 if blank line */
}
