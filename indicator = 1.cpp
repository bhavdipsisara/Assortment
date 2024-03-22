#include<stdio.h>
#include<string.h>

main()
{
	char ch[100];
	char *p[100];
	
	printf("enter any string ");
	gets(ch);
	
	int i;
	for(i=0;ch[i]!=NULL;i++)
	{
		p[i] = &ch[i];
	}
	
	printf("string Length = %d",strlen(*p));
}