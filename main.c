#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m,n,i,j,small=0,si=0,sj=0;
    scanf("%d",&m);
    scanf("%d",&n);
    int mat[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    small= mat[0][0];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(mat[i][j] < small)
            {
                small = mat[i][j] ;
                si=i;
                sj=j;
            }
        }
    }
    if(si>=(m/2))
    {
        if(sj>=(n/2))
        {
            printf("%d",4);
        }
        if(sj<(n/2))
           {
               printf("%d",3);

           }
    }
    if(si<(m/2))
    {
        if(sj>=(n/2))
        {
            printf("%d",2);
        }
        if(sj<(n/2))
           {
               printf("%d",1);
           }
    }
    return 0;
}
