#include<stdio.h>
#include<string.h>
int main()
{
	char str[70],temp[70];
	printf("ENTER A STRING\n");
	gets(str);

	
	///count number of vowel
	int count=0;
	for(int i=0; str[i]!='\0'; i++)
	{
		if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' )
		{
			count++;
		}
	}
	printf("NUMBER OF VOWEL IN STRING :%d\n",count);
	
	//// lower to upper case
	printf("AFTER CONVERSION LOWER TO UPPER \n");
	for(int i=0; str[i]!='\0'; i++)
	{
		str[i]=str[i]-32;
	}
	puts(str);
	printf("\n");
	int j=0;
	printf("AFTER REVERSE\n");
	for(int i=strlen(str)-1; i>=0; i--)
	{
		temp[j++]=str[i];
	}
	puts(temp);
}
