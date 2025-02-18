#include <stdio.h>
void multiplyMatrices(int a1[r1][c1],int a2[r2][c2],int r[][],int r1,int c1,int r2,int c2)
 {
    int i, j, k;
    if (c1!=r2)
        {
        printf("Matrix multiplication is not possible.\n");
        return;
        }

    for (i=0;i<r1;i++)
    {
        for (j=0;j<c2;j++)
        {
            r[i][j]=0;
            for (k=0;k<c1;k++)
             {
                r[i][j]+=a1[i][k]*a2[k][j];
             }
        }
    }
}

int main()
 {
    int r1,c1,r2,c2,i,j;
    printf("Enter the number of rows in matrix 1:\n");
    scanf("%d",&r1);
    printf("Enter the number of columns in matrix 1:\n");
    scanf("%d",&c1);
     int a1[r1][c1];
    printf("Enter the number of rows in matrix 2:\n");
    scanf("%d",&r2);
    printf("Enter the number of columns in matrix 2:\n");
    scanf("%d",&c2);
    int a2[r2][c2];
    printf("Enter elements of matrix 1:\n");
    for(i=0;i<r1;i++)
        {
        for (j=0;j<c1;j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
   int r[][];
    printf("Enter elements of matrix 2:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&a2[i][j]);
        }
    }

    multiplyMatrices(a1, a2, r, r1, c1, r2, c2);

    printf("Resultant matrix:\n");
    for(i=0;i<r1;i++)
        {
        for(j=0;j<c2;j++)
        {
            printf(" %d ",r[i][j]);
        }
        printf("\n");
    }

    return 0;
}






