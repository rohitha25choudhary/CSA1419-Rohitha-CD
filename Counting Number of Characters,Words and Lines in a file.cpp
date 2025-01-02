#include <stdio.h>
int main()
{
	FILE *f=fopen("sample1.txt","r");
	int cc=0,wc=0,lc=0;
	char c=getc(f);
	while(c!=EOF)
	{
		cc++;
		if(c=='\n') lc++;
		if(c==' ') wc++;
		c=getc(f);
	}
	printf("Character Count=%d\nWord Count=%d\nLine Count=%d",cc,wc,lc);
	fclose(f);
}
