#include<stdio.h>
#include<math.h>
typedef long long ll;
const int N=1e6+3;
ll a[600][600],b[600][600],c[600][600];
int main()
{
  int t;
  scanf("%d",&t);
  for(int k=1;k<=t;k++)
  {
  	ll m,n;
  	scanf("%lld%lld",&m,&n);
  	for(int i=0;i<m;i++)
  	  for(int j=0;j<n;j++)
  	   scanf("%lld",&a[i][j]);
  	printf("Test %d:\n",k);
  	for(int i=0;i<n;i++)
  	{
  		for(int j=0;j<m;j++)
  		{
  			b[i][j]=a[j][i];
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			c[i][j]=0;
		}
	}
	for(int i=0;i<m;i++)
	{
	 for(int j=0;j<m;j++) 
	 {
	    for(int h=0;h<n;h++)
	    {
	   	  c[i][j]+=a[i][h]*b[h][j];
	    }
	 }
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%lld ",c[i][j]);
		}
		printf("\n");
	}
  }
  return 0;
}
