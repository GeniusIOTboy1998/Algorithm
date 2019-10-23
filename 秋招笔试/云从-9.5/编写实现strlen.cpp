#include <stdio.h>
#include <string.h>

const int maxn=10000+10;
char c[maxn];

int str_length(char* s)
{
     int i=0;
     while(s[i++]!='\0')
     	;
     return i;
}

int main()
{
/*
	char c;
    
    int count==0;

    while(scanf("%c",&c)==EOF)
    {
       count++;
    }
*/
  //  char* c;

  //  cin.get(c,) 

    gets(c);
  

	int count=str_length(c);
    printf("%d\n",--count);

	return 0;

}