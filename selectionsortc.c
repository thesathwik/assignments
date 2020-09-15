/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[5]={3,45,12,0,39};
    int i,j,mini;
    for(i=0;i<4;i++)
    {
        mini=i;
        for(j=i+1;j<5;j++)
        {
        if(a[mini]>a[j])
        {
            mini=j;
        }
        }
        int t;
        t=a[i];
        a[i]=a[mini];
        a[mini]=t;
    }
    for(i=0;i<5;i++)
    {
     printf("%d",a[i]);  
    }
    return 0;
}
