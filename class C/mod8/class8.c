#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
   int max=a[0],maxi=0;
   for(int i=0;i<n;i++){
    if(max>a[i]){

    }
    else{
       max=a[i];
       maxi=i;
 
    }
   }
   int min=a[0], mini=0;
   for(int i=0;i<n;i++){
    if(min<a[i]){
    }
    else{
       min=a[i];
       mini=i;
    }
   }
   
 a[mini]=max;
 a[maxi]=min;
   for(int i=0;i<n;i++)
   {
     printf("%d ",a[i]);
   }
  
    return 0;
}

