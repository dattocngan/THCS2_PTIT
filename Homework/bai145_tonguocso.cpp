#include<stdio.h>
#include<math.h>
#include<string.h>

int tong(int n){
	int sum = 0;
    for(int i = 2; i <= n; i++){
        while(n % i == 0){
            n /= i;
            sum += i;
        }
    }
    return sum;
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n], sum = 0;;
	for(int i = 0 ; i < n ; i++ ){
		scanf("%d",&a[i]);
		sum += tong(a[i]);
	}
	printf("%d",sum);
	return 0;
}

