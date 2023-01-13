/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i,j,k,x,y,a,m,b;
    scanf("%d",&n);
    x=(n/2)-1;
    a=2*n-x-1;
    b=a-x;
    for(i=0;i<x;i++)
    {   
        for(k=0;k<x-i;k++)
        {
            printf(" ");
        }
        for(j=x-i-1;j<x+i+1;j++)
        {
            printf("*");
        }
        for(m=x+i;m<a+x-i;m++)
        {
            printf(" ");
        }
        for(y=n+2-i;y<b+i+3;y++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(k=0;k<i;k++)
        {
            printf(" ");
        }
        for(j=i;j<2*n-i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
