#include <stdio.h>

void fun(int y)
{
    for(int i=1;i<=y;i++){
      if(i==y){
        printf("%d",i);
      }else{
        printf("%d ",i);
      }
      
    }
  
}
int main(){
   int y;  
   scanf("%d",&y);
  
   fun(y);
    
    return 0;
}