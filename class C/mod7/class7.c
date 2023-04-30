#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    if(N<=0){
        for(int i=N;i<=1;i=i+1){
         printf("%d ",i);
        }
    }else{
       for(int i=1;i<=N;i=i+1){
         printf("%d ",i);
        } 
    }
    


    return 0;
}
