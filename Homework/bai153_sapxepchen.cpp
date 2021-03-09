#include<stdio.h>

int main(){	
	int n;
	scanf("%d",&n);
    int arr[n];
    int i, key, j,k = 0 , m = 2;
    int check = 0;
    for(i=0; i < n ; i++) scanf("%d",&arr[i]);
   	for (i = 1; i < n; i++){
		key = arr[i];
		j = i-1;
		while (j >= 0 && arr[j] > key){
		arr[j+1] = arr[j];
		j = j-1;
		}
       	arr[j+1] = key;
       	if(check == 0){
       		printf("Buoc %d: %d\n",k++,arr[0]);
		}	
   		printf("Buoc %d: ",k++);
   		for(int x = 0 ; x < m ; x++ ){
   			printf("%d ",arr[x]);
		}
		m++;
		check = 1;
		printf("\n");
   	}
 
 
    return 0;
}
 
