#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int k = 1 ; k <= t ; k++ ){
		int n;
		scanf("%d",&n);
		int a[n],b[100000]={0};
		int i;
		for(i = 0; i < n ; i++ ){
			scanf("%d", &a[i]);
			b[a[i]]++;
		}
		printf("Test %d:\n",k);
		for( i = 0 ; i < n ; i++ ){
			if (b[a[i]] >= 1 ){
				printf("%d xuat hien %d lan",a[i], b[a[i]]);
				b[a[i]] = 0;
				printf("\n");
			}
		}
	}
	return 0;
}

