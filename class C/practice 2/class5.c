#include<stdio.h>
int main(){
    int x;
    scanf("%d\n",&x);

    int sum=x/1000;
    printf("%d\n",sum);

    int dum=x/100;
    printf("%d\n",dum);
    
     int uum=x/10;
     printf("%d\n",uum);

    return 0;
}