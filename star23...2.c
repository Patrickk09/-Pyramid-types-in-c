#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,k,r;
    printf("Enter rows");
    scanf("%d",&r);

    for(i=1;i<=r;i++)
    { k=1;
     for(j=1;j<=r;j++)
     {
       if(j<=i)
       {
        printf("%d",k);
        k=1-k;
          }

       else
       printf(" ");

     }
    printf("\n");
    }
getch();
}
