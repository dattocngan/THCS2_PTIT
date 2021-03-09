#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int i, j, min_idx,k = 1;
    for(i = 0 ; i < n ; i++ ) scanf("%d",&arr[i]);
    for (i = 0; i < n-1; i++){
    	min_idx = i;
	    for (j = i+1; j < n; j++){
	        if (arr[j] < arr[min_idx]){
	        	min_idx = j;
			}
		}
		int temp = arr[min_idx];
		arr[min_idx] = arr[i];
		arr[i] = temp;
        	printf("Buoc %d: ",k++);
        	for(int x = 0 ; x < n ; x++){
        		printf("%d ",arr[x]);
			}
			printf("\n");
    }
    return 0;
}
