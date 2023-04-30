#include <stdio.h>

int main(){
   int n,s,k;
   scanf("%d ",&n);
   s=n-1;
   k=1;
   for(int j=1;j<=n;j++)
  {
    for(int i=1;i<=s;i++){
      printf(" ");
    }
    for(int j=1;j<=k;j++){
      printf("*");
    }
    s--;
    k=k+2;

    printf("\n");
    
  }
   
    
    return 0;
// 10
    
}
