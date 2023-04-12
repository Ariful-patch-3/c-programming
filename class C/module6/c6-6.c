#include <stdio.h>
int main(){
    int sum;
    scanf("%d",&sum);
   for(int i=1;i<=sum;i++){

    int n;
    scanf("%d",&n);
    do{
        printf("%d ",n%10);
        n=n/10;
    }

    while(n!=0);

    printf("\n");
   }

    return 0;
}
