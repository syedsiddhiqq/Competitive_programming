#include<stdio.h>

int main()
{
  int m,n,i,j,sum=0;
  int pos[4];
  scanf("%d",&m);
  scanf("%d",&n);
  int rect[m][n];
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&rect[i][j]);
    }
  }
  for(i=0;i<4;i++)
  {
    scanf("%d",&pos[i]);
  }

for(i=pos[0];i<=pos[2];i++)
{
  for(j=pos[1];j<=pos[3];j++)
  {
    sum+=rect[i][j];
  }
}
printf("%d",sum);
  return 0;

}
