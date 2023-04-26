#include <stdio.h>
#include <string.h>
int main(){
    int n;
    scanf("%d",&n);
     int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int b=0,c=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            b++;
        }
        else {
          c++;
        }

    }
    printf("%d %d",b,c);
   
    
    return 0;
}
