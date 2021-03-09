#include <stdio.h>
 
int pascal(int n) {
   int i;
    
   for(i = 1; n > 1; n--)
      i *= n;
       
   return i;
}
 
int returnPascal(int n,int m) {
   return pascal(n) / ( pascal(n-m) * pascal(m) );
}
 
int main() {
   int n, i, j;
   scanf("%d",&n);
   for(i = 0; i < n; i++) {
      for(j = 0; j <= i; j++){
      	printf("%d ", returnPascal(i, j));
	  }
      printf("\n");
   }
   return 0;
}
