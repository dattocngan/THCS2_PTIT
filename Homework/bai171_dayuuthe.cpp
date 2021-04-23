#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char a;
		int dem = 0,countChan = 0,countLe = 0;
		do{
			int n;
			scanf("%d",&n);
			if(n % 2 == 0) countChan++;
			else countLe++;
			dem++;
		} while(getchar() != '\n');
		if(dem % 2 == 0 && countChan > countLe){
			printf("YES\n");
		}else if(dem % 2 != 0 && countChan < countLe){
			printf("YES\n");
		}else printf("NO\n");
	}
	return 0;
}

