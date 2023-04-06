#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1);
   {
    if(i%5==0){
        printf("even\n");

    }
else{
    printf("odd\n");
    }

   }
    return 0;
}