#include <stdio.h>
#include<math.h>
 
long long ktcp(long long a){
	long long b=sqrt(a);
	if(b*b==a) return b;
	b++;
	if(b*b==a) return b;
	return 0;
}

int main(){
	long long a,b,c,d,e,f,x,y,temp;
	scanf("%lld %lld %lld %lld %lld %lld",&a,&b,&c,&d,&e,&f);
	x=a*b+c*d+e*f;
	y=ktcp(x);
	if(y==0)	printf("NO");
	else{
		if(a>b){
			temp=a;
			a=b;
			b=temp;
		}
		if(c>d){
			temp=c;
			c=d;
			d=temp;
		}
		if(e>f){
			temp=e;
			e=f;
			f=temp;
		}
		if(b==d && d==f && f==y) printf("YES");
		else{
			if(d==y) {
				temp=a;
				a=c;
				c=temp;
				temp=b;
				b=d;
				d=temp;
			}
			if(f==y) {
				temp=a;
				a=e;
				e=temp;
				temp=b;
				b=f;
				f=temp;
			}
			if(b==y)
			{
				a=y-a;
				if((c==a && e==a) || (d==a && e==a)|| (c==a && f==a) || (d==a && f==a))  printf("YES");
				else printf("NO");
			}		
			else printf("NO");
		}
 
	}	
}
