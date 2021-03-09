#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int k = 1 ; k <= t ; k++ ){
		int n,m;
		scanf("%d%d",&n,&m);
		int a[n][m], tongHang, tongCot, maxHang = 0, maxCot = 0, hang, cot;
		for(int i = 0 ; i < n ; i++ ){
			tongHang = 0;
			for(int j = 0 ; j < m ; j++ ){
				scanf("%d",&a[i][j]);
				tongHang += a[i][j];
			}
			if( tongHang > maxHang ){
				hang = i;
				maxHang = tongHang;
			}
		}
		for(int j = 0 ; j < m ; j++ ){
			tongCot = 0;
			for(int i = 0 ; i < n ; i++ ){
				if(i == hang) continue;
				tongCot += a[i][j];
			}
			if( tongCot > maxCot ){
				cot = j;
				maxCot = tongCot;
			}
		}
		printf("Test %d:\n",k);
		for(int i = 0 ; i < n ; i++){
			if( i == hang ) continue;
			for(int j = 0; j < m ; j++){
				if(j == cot) continue;
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}

