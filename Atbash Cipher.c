#include<stdio.h>
void main()
{
	char text[21];
	int i=0;
	printf("Enter text to encyypt (max 20 characters):");
	scanf("%20s",text);
	for(i=0;text[i]!='\0';i++)
	{
		if((text[i]>='A' && text[i]<='Z'))
		{
			text[i]='Z'-(text[i]-'A');
		}
		else if((text[i]>='a'&&text[i]<='z'))
		{
			text[i]='z'-(text[i]-'a');
		}
		else if((text[i]>='0' && text[i]<='9'))
		{
			text[i]='9'-(text[i]-'0');
		}
	}
	printf("Encrypted ciphertext: %s\n",text);
}
