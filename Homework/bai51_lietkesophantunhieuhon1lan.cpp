#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n],b[100000]={0};
	int i;
	for(i = 0; i < n ; i++ ){
		scanf("%d", &a[i]);
		b[a[i]]++;
	}
	int count = 0;
	for( i = 0 ; i < 100000 ; i++ ){
		if (b[i] > 1 ){
			count++;
		} 
	}
	printf("%d\n",count);
	for( i = 0 ; i < n ; i++ ){
		if (b[a[i]] > 1 ){
			printf("%d ",a[i]);
			b[a[i]] = 0;
		} 
	}
	return 0;
}

