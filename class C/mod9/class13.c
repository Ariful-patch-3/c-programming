#include <stdio.h>

int main(){
     int n;
    scanf("%d",&n);
     int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int x;
    int b=0;
    scanf("%d",&x);
   for(int i=0;i<n;i++){
       if(a[i]==x){
        b++;
       }
    }
    printf("%d",b);
    return 0;

   
}
// 10
// 5 0 7 0 7 6 4 7 7 1 
// 7