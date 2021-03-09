#include<stdio.h>
#include<math.h>
#include<string.h>

int tinhTong(int a){
	int sum = 0;
	while( a != 0 ){
		sum += (a%10);
		a /= 10;
	}
	return sum;
}

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(tinhTong(a) <= tinhTong(b)) printf("%d %d",a,b);
	else printf("%d %d",b,a);
	return 0;
}

