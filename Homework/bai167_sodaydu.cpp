#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char a[1000];
		gets(a);
		int check =0;
		int count0 = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0, count7 = 0, count8 = 0,count9 =0;
		for(int i = 0 ; i < strlen(a) ; i++ ){
			if(a[i] < 48 || a[i] > 57 || a[0] == '0' ){
				printf("INVALID\n");
				check++;
				break;
			}
			if(a[i] == 48) count0++; 
			if(a[i] == 49) count1++; 
			if(a[i] == 50) count2++; 
			if(a[i] == 51) count3++; 
			if(a[i] == 52) count4++; 
			if(a[i] == 53) count5++; 
			if(a[i] == 54) count6++; 
			if(a[i] == 55) count7++; 
			if(a[i] == 56) count8++;
			if(a[i] == 57) count9++; 
		}
		if(check == 0){
			if(count0 == 0 || count1 == 0 || count2 == 0 || count3 == 0 || count4 == 0 || count5 == 0 || count6 == 0 || count7 == 0 || count8 == 0 || count9 == 0){
				printf("NO\n");
			}else printf("YES\n");
		}
	}
	return 0;
}

