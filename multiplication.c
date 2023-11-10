#include<stdio.h>
int main()
{
    int M[10][10],N[10][10],R[10][10],r1,r2,c1,c2,i,j,k,sum=0;
    printf("Enter rows and colum for m matrix:");
    scanf("%d %d",&r1,&c1);
    printf("Enter rows and colum for n matrix:");
    scanf("%d%d",&r2,&c2);
    while(c1!=r2)
    {
        printf("Error!! col of m matrix not equal to row of n matrix");
        printf("Enter rows and colum for m matrix:");
        scanf("%d %d",&r1,&c1);
        printf("Enter rows and colum for n matrix:");
        scanf("%d%d",&r2,&c2);
    }
    //m matrix
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("M[%d][%d] =",i,j);
            scanf("%d",&M[i][j]);
        }
    }
    //second matrix
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("N[%d][%d] =",i,j);
            scanf("%d",&N[i][j]);
        }
    }
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum=sum+M[i][k]*N[k][j];
            }
            R[i][j]=sum;
            sum=0;
        }
    }
    //printing m&n matrix
    printf("\n M = ");
    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c1; j++)
        {
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }
    printf("\n N = ");
    for(i=0; i<r2; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
        {
            printf("%d ",N[i][j]);
        }
        printf("\n");
    }
    //result
    printf("\n R");
    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
        {
            printf("%d",R[i][j]);
        }
        printf("\n");
    }
}
