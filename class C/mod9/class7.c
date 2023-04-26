#include <stdio.h>
int main(){
    int n=0,m=0;
    scanf("%d %d",&n,&m);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
   
 
    int cnt[10]={0};
     for(int i=0;i<n;i++){
        cnt[a[i]]++;
    }
   for(int i=1;i<6;i++){
    printf(" %d \n",cnt[i]);
   }
    return 0;
}
