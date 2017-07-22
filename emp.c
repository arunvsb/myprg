#include<stdio.h>
int main()
{
    int N,M,A,k1=0,s,t,c=0,k,j,count=0;
    scanf("%d %d %d",&N,&M,&A);
    int B[M][2],C[N-1],S[N];
    for(k=0;k<M;k++)
{
    for(j=0;j<A;j++)
    {
        scanf("%d\t",&B[k][j]);
       
    }
}
for(k=0;k<N;k++)
{
    scanf("%d",&S[k]);
}
for(k=0;k<N;k++)
{
    t=k1;
    for(j=0;j<2;j++)
    {
        s=j;
        if(B[k][j]==A&&j==0)
        {
            C[k1]=B[k][j+1];
            k++;
            for(k=0;k<N;k++)
            {
                for(j=0;j<2;j++)
                {
                    if(B[k][j]==B[t][s+1]&&j==0)
                    {
                        C[k]=B[k][j+1];
                        k++;
                    }
                }
            }
        }
        j=s;
    }
    k1=t;
}
for(k=0;k<k1;k++)
{
    if(S[A-1]>S[C[k1]-1])
    {
        count++;
    }
}
printf("%d",count);

   
}
