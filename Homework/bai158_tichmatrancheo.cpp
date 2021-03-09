#include<stdio.h>
#include<math.h>
typedef long long ll;
const int N=1e6+3;
int main()
{
  int t;
  scanf("%d",&t);
  for(int h=1;h<=t;h++)
  {
  	int n;
  	scanf("%d",&n);
  	int a[25][25],b[25][25],c[25][25]={0};
  	printf("Test %d:\n",h);
  	for(int i=1;i<=n;i++)
  	{
  		for(int j=1;j<=i;j++)
  		{
  		  a[i][j]=j;	
		}
		for(int j=i+1;j<=n;j++) a[i][j]=0;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			b[i][j]=a[j][i];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			for(int k=1;k<=n;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
  }
  return 0;
}
