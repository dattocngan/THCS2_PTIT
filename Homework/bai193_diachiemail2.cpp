#include<stdio.h>
#include<math.h>
#include<string.h>

int check1(int start,int count, char b[]){
	int i,j, dem,kiemtra;
	for( i = 0 ; i < start ; i++ ){
		kiemtra = 0;
		if(b[i] == b[start]){
			int k = i;
			for(j = start; j < start + count ; j++ ){
				if(b[j] != b[k++] ){
					kiemtra++;
					break;
				} 
			}
			if( kiemtra == 0 ) dem++;
		}
	}
	return dem;
}

int main(){
	int t;
	scanf("%d",&t);
	char b[1000];
	int z=0, start;
	getchar();
	while(t--){
		char a[1000];
		gets(a);
		start = z;
		int count = 0;
		int i , j , k, check = 0;
		for(i = 0 ; i < strlen(a) ;i++ ){
			if(a[i] >= 'A' && a[i] <= 'Z') a[i] += 32;
		}
		for( i = strlen(a) - 1 ; i >= 0 ; i-- ){
			if( a[i] == ' ' ){
				k = i - 1;
				for( j = i + 1 ; j < strlen(a) ; j++ ){
					printf("%c", a[j] );
					b[z++] = a[j];
					count++;
				}
				check = 1;
				break;
			}
		}
		if( check == 0 ){
			for( i = 0 ; i < strlen(a) ; i++ ){
				printf("%c",  a[i] );
				b[z++] = a[j];
				count++;
			}
			printf("@ptit.edu.vn\n");
			if( start != 0 ){
				int ketqua = check1(start,count,b);
				if(ketqua != 0 ) printf("%d",ketqua+1);
			}
		}else{
			i = 0;
			int kiemtra = 0;
			while( i < k){
				if( a[i] != ' ' && kiemtra == 0){
					printf("%c",  a[i] );
					count++;
					b[z++] = a[i];
					i++;
					kiemtra++;
					continue;
				}
				if( a[i] != ' ' && a[i-1] == ' ' && kiemtra == 1){
					printf("%c",  a[i] );
					count++;
					b[z++] = a[i];
				}
				i++;
			}
			if( start != 0 ){
				int ketqua = check1(start,count,b);
				if(ketqua != 0 ) printf("%d",ketqua+1);
			}
			printf("@ptit.edu.vn\n");
		}
	}
	return 0;
}

