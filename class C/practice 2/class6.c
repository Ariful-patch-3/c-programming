#include<stdio.h>
int main(){
    int x;
    scanf("%d\n",&x);
    int sum=x/1000;
    if(sum%2==0){
        printf("EVEN");
    }
    else{
        printf("ODD");
    }

    return 0;
}