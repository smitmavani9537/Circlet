#include<stdio.h>

int main()
{
    int i, j;
    
    for(i=1; i<=4; i++)
    {
        for(j=4; j>i; j--)
        {
            printf(" ");
        }
      printf("*");
        for(j=1; j<(i-1)*2; j++)
        {
            printf(" ");
        }
        if(i==1) printf("\n");
      else printf("*\n");
    }
}
