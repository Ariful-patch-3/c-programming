#include <stdio.h>
#include <limits.h>

int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int sum=0,sun=0;
    for(int i=0;i<n;i++){
        if(ar[i]%2==0){
            sum=sum+ar[i];
          
        }
        else{
            sun=sun+ar[i];
            
        }
       
    }
     printf("%d %d",sum,sun);

 
    return 0;
}
