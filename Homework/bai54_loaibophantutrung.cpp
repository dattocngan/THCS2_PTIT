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
	for( i = 0 ; i < n ; i++ ){
		if (b[a[i]] >= 1 ){
			printf("%d ",a[i]);
			b[a[i]] = 0;
		} 
	}
	return 0;
}

