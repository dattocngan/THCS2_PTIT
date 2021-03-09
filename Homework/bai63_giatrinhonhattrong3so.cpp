#include<math.h>
#include<stdio.h>

int main(){
	int a,b,c,e;
	scanf("%d%d%d",&a,&b,&c);
	e=(a+b-abs(a-b))/2;
	printf("%d",(c+e-abs(c-e))/2);
	return 0;
}
