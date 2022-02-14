#include <stdio.h>
#include<string.h>

int main()
{
	int c=0;
	FILE* ptr = fopen("file.txt", "r");
    char a[100];
	//printf("Enter the Grandfather string:");
	scanf("%s",a);
	if (ptr == NULL)
	{
		printf("no such file.");
		return 0;
	}

    char buf[1000];
    char buf1[1000];
    char d[1000];

    while(fscanf(ptr,"%s%s",buf,buf1)!=EOF)
    {
        if(strcmp(a,buf1)==0)
            {
                strcpy(d,buf);
            }
	}

	fseek(ptr, 0, SEEK_SET);
	while(fscanf(ptr,"%s%s",buf,buf1)!=EOF)
	{
	    if(strcmp(buf1,d)==0)
	    {
	        c++;
	    }
	    
	}
	printf("%d\n",c);
    return 0;
}

