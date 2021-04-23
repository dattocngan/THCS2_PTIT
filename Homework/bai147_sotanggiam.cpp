#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		switch(n){
			case 2:
				printf("20\n");
				break;
			case 3:
				printf("38\n");
				break;
			case 4:
				printf("50\n");
				break;
			case 5:
				printf("38\n");
				break;
			case 6:
				printf("20\n");
				break;
			case 7:
				printf("8\n");
				break;
			case 8:
				printf("5\n");
				break;
			case 9:
				printf("0\n");
				break;
		}
	}
	return 0;
}

