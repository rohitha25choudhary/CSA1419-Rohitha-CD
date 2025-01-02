#include <stdio.h>
#include <string.h>
int main()
{
	char a[100];
	printf("Enter the Line:");
	scanf("%[^\n]s",a);
	if(a[0]=='/' || a[1]=='/') printf("The Entered Line is a Comment!!");
	else if((a[0]=='/' && a[1]=='*') && (a[strlen(a)-1]=='*' && a[strlen(a)-2]=='/')) printf("The Entered line is a Comment");
	else printf("The Eneterd Line is a Statement!!");
	return 0;
}
