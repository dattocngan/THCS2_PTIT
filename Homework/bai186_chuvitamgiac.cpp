#include<stdio.h>
#include<math.h>
typedef long long ll;
const int N=1e6+3;
void xuly()
{
	double x1,y1,x2,y2,x3,y3;
	scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
	double ab=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	double ac=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
	double cb=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
	if(ab+ac<=cb||ab+cb<=ac||cb+ac<=ab) {printf("INVALID\n");return;}
	double p=ab+ac+cb;
	if(p<=0) printf("INVALID\n");
	else printf("%.3lf\n",p);
}
int main()
{
  int t;
  scanf("%d",&t);
  for(int i=1;i<=t;i++) xuly();
  return 0;
}
