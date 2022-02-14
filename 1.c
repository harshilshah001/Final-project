#include <stdio.h>
#include <string.h>
#include <math.h>

char str[101];
void removeCh(int i, int n)
{
    while(i<n)
    {
        str[i]=str[i+2];
        str[i+1]=str[i+3];
        i+=2;
    }
}

int main()
{
    int i=0,len=0,n;
    //printf("Enter the length of string:");
    scanf("%d",&n);
    //printf("Enter the string:");
    scanf("%s",str);
    while(i<n)
    {
        if((str[i]==str[i+1])&&(i>=0)&&str[i]!='\0')
        {
            removeCh(i,n);
            i--;
        }
        else
        {
            i++;
        }
    }
    if(str[0]=='\0')
       printf("Empty String\n");
    else
       printf("%s\n",str);

    return 0;
}

