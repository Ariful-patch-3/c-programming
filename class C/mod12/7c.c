#include <stdio.h>

void sum(int a[],int n)
{
    
   int c=0;
     for(int i=0;i<n;i++){
       if(a[i]==0){
        break;
       }
    c++;   
    }
    printf("%d",c);
    
     
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
