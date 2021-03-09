#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int t;
	scanf("%d",&t);
	
	while(t--){
		getchar();
		char a;
		a = getchar();
		if( a >= 95 ) printf("%c",a-32);
		else printf("%c",a+32);
		printf("\n");
	}
	return 0;
}

