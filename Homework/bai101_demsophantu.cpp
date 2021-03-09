#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n];
		for( int i = 0 ; i < n ; i++ ){
			scanf("%d",&a[i]);
		}
		int count = 1;
		for(int i = 1 ; i < n ; i++ ){
			int check = 0;
			for( int j = i - 1 ; j >= 0 ; j-- ){
				if(a[i] < a[j]){
					check++;
					break;
				}
			}
			if( check == 0 ) count++;
		}
		printf("%d\n",count);
	}
	return 0;
}

