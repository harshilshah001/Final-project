#include <stdio.h>
#include <stdlib.h>
#define CHAR_BITS  8  
#define INT_BITS  ( sizeof(int) * CHAR_BITS)

void PB(unsigned n)
{
	short int ip;
	for (ip = (INT_BITS -1) ; ip >= 0 ; ip--)
	{
	  (n & (1 << ip))? printf("1"): printf("0");	
	}
}

unsigned int reverseBits(unsigned int num)
{
    unsigned int count = (INT_BITS -1); 
    unsigned int tmp = num;        
	num >>= 1;
    
    while(num)
    {
       tmp <<= 1;  
	   tmp |= num & 1; 
       num >>= 1; 
       count--;
    }
    
    tmp <<= count; 
    return tmp;
}
 
int main()
{
    unsigned int data = 0;
    unsigned int Ret = 0;
    
    //printf("Enter the number : ");
    scanf("%u",&data);
    printf("\nBefore:" );
    PB(data);
    
    
    Ret = reverseBits(data);
    printf("\tAfter:" );
    PB(Ret);
    
return 0;
}
