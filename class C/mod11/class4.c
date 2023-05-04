#include <stdio.h>

void sum(int a[],int n)
{
    
    int x=a[0],y=0;
     for(int i=0;i<n;i++){
        if(a[i]<x){
            x=a[i];
        }
        else if (a[i]>y)
        {
            y=a[i];
        }
        
    }
    printf("%d %d",x,y);
     
}
int main(){
   int n;
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++){
    scanf("%d",&a[i]);

   }
  
   
    sum(a,n);
    return 0;

  
}
