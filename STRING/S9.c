//QUE.9 : Write a program in C to find the maximum number of characters in a string.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],ch,ans;
	int count,i,max=0;
	printf("\n Enter string : ");
	gets(str);
	strlwr(str);
	for(ch='a'; ch<='z'; ch++)
	{
		count = 0;
		for(i=0; str[i] != '\0'; i++)
		{
			if(ch == str[i])
			{
				count++;
			}
		}
		if (count > max)
        {
            max = count;
            ans = ch;
        }
	}
	if (max > 0)
    {
        printf("\nmaximum character is :%c  = %d times\n",ans, max);
    }
	return 0;
}
