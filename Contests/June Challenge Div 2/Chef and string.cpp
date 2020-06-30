//https://www.codechef.com/JUNE20B/problems/XYSTR
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int n;
	char str[500];
	scanf("%d",n);
	while(n--)
	{
	scanf("%s",str);
	int pairs=0;
	char *ptr1=&str[0],*ptr2=&str[1];
	for(int i=0,j=1;str[j]!='\0'||str[i];)
	{
		if(((*ptr1=='x')&&(*ptr2=='y'))||((*ptr1=='y')&&(*ptr2=='x')))
		{
			pairs++;
			*ptr1++;
			*ptr1++;
			*ptr2++;
			*ptr2++;
			if(*ptr1=='\0'||*ptr2=='\0')
			break;
			continue;
		}
		else if(((*ptr1=='x')&&(*ptr2=='x'))||((*ptr1=='y')&&(*ptr2=='y')))
		{
			*ptr1++;
			*ptr2++;
			if(*ptr1=='\0'||*ptr2=='\0')
			break;
			continue;
		}
	}
	printf("%d\n",pairs);
	
}
free(str);
}