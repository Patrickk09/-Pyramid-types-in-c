#include<stdio.h>
#include<conio.h>


 void main()
 {
    int i,j,k=0,rows;
printf("Enter rows");
scanf("%d",&rows);


    for(i=1;i<=rows;i++)
    {
        i<=(rows+1)/2?k++:k--;
      for(j=1;j<=(rows+1)/2;j++)
       {
         if(j<=k)
              printf("*");

         else
              printf(" ");
       }
     printf("\n");
    }
   getch();
 }
