#include<stdio.h>

int fminor(int n, int mat[n][n], int minor[n-1][n-1], int r, int c)
{
    int i=0,j=0;
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<n;col++)
        {
            if(row!=r && col!=c)
            {
                minor[i][j++] = mat[row][col];
                if(j==n-1)
                {
                    j=0;
                    i++;
                }
            }
        }
    }
}

int detm(int n, int det[n][n])
{   if(n==1)
    {
    return det[0][0];
    }

    int d=0,sign=1,minor[n][n];
    for(int j=0;j<n;j++)
    {
        fminor(n,det,minor,0,j);
        d += sign*det[0][j]*detm(n-1,minor);
        sign = -sign;
    }
    return d;
}
int main()
{
    int n,i,j;
    printf("Enter rows and columns of matrix: ");
    scanf("%d %d",&n,&n);
    int det[n][n];

    printf("Enter matrix elements: \n");
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
        scanf("%d",&det[i][j]);
    }
    }
    
    printf("Determinant = %d\n",detm(n,det));

    if(detm(n,det)==0)
        printf("This matrix is a singular matrix\n");
    else
        printf("This matrix is not a singular matrix");
    return 0;
}