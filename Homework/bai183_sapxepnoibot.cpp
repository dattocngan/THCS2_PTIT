#include <stdio.h>

void bubbleSort(int arr[], int n)
{
    int i, j;
    int haveSwap = 0;
    int count = 1;
    for (i = 0; i < n-1; i++){
        haveSwap = 0;
        for (j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
			    arr[j] = arr[j+1];
			    arr[j+1] = temp;
                haveSwap = 1;
            }
        }
        if(haveSwap == 0){
            break;
        }
        printf("Buoc %d: ",count++);
        for(int k = 0 ; k < n ; k++){
        	printf("%d ", arr[k]);
		}
		printf("\n");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++) scanf("%d", &arr[i]);
    bubbleSort(arr, n);
    return 0;
}
