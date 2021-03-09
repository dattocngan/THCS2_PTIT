#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		if( (int)sqrt(n) * (int)sqrt(n) == n ) printf("YES");
		else printf("NO");
		printf("\n");
	}
	return 0;
}

