#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n], k = 1;
	for(int i = 0 ; i < n ; i++ ) scanf("%d",&a[i]);
	for(int i = 0 ; i < n-1 ; i++ ){
		int check = 0;
		for(int j = i ; j < n ; j++ ){
			if(a[j]<a[i]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
				check++;
			}
		}
		if(check != 0){
			printf("Buoc %d: ",k++);
			for(int m = 0 ; m < n ; m++ ){
				printf("%d ",a[m]);
			}
			printf("\n");
		}
	}
	return 0;
}

