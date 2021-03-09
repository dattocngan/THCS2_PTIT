#include<stdio.h>
#include<math.h>
#include<string.h>

int ucnn(int a, int b){
	while(a != b){
		if( a > b ){
			a -= b;
		}else{
			b -= a;
		}
	}
	return a;
}

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int i,j;
	for( i = a ; i < b ; i++ ){
		for(j = i ; j <= b ; j++ ){
			if(ucnn(i,j) == 1) printf("(%d,%d)\n",i,j);
		}
	}
	return 0;
}

