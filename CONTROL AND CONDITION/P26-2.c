//QUE.26.ii : Vowel or Consonant using switch case
#include<stdio.h>
int main()
{
	char ch;
	printf("\n enter the character: = ");
	scanf(" %c",&ch);
	switch(ch)
	{
	case'a':
	case'e':
   	case'i':
		case 'o':
			case 'u':
				case 'A':
					case 'E':
						case 'I':
							case 'O':
								case 'U':
				printf("\n vowel.");
				break;
				default:
					printf("\n consonant.");
	}
	return 0;
}
	
