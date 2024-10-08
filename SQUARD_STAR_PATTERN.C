#include<stdio.h>
#include<stdlib.h>
void SQ()
{   int n,i,j;
    int number;
    printf("koto number er dekhte chas enter kor :");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        for(j=0;j<n;j++)
        {
            printf("*");
        }
       printf("\n");
    }
}

void HOLLOW_SQUARE()
{
    int n,i,j;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i==0 && i==n)
        {
            for(j=0;j<=n;j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}


int main()
{
   //HOLLOW_SQUARE(); 
   SQ();
   return 0;
    
}