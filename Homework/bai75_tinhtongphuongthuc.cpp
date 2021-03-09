#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n;
	scanf("%d",&n);
	double sum = 0;
	int i;
	for( i = 1 ; i <= n ; i++ ){
		sum += (1.0/i);
	}
	printf("%.4lf",sum);
	return 0;
}

