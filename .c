#include<stdio.h>
#include<string.h>
void main()
{
	char n1[100];
	char n2[100];
	printf("enter your first  name\n");
	gets(n1);
	printf("enter your second name\n");
	gets(n2);
	int len1,len2;
	len1=strlen(n1);
	len2=strlen(n2);
	printf("length of 1 string is %d\n",len1);
	printf("length of 2 string is %d\n",len2);
	int i;
	for(i=0;i<len2;i++)
	{
		n1[len1++]=n2[i];
	}
	puts(n1);
	
	
	
}
