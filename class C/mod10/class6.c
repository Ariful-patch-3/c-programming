#include <stdio.h>

int main(){
   int n,s,k;
   scanf("%d ",&n);
   s=n-1;
   k=1;
   
   //printf("%d",n);
   for(int i=1;i<=(n*2);i++)
  {
    for(int j=1;j<=s;j++){
      printf(" ");
    }
    for(int j=1;j<=k;j++){
      printf("*");
    }
  
   if(i<n){
    s--;
    k=k+2;
   }
   
   else{
    s++;
    k=k-2;
   }
  printf("\n");
  }
    return 0;

    //5
}
