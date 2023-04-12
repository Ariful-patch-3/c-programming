#include<stdio.h>
int main(){
    int sum=0;
    int i;
    for(i=1;i<=7;i=i+1)
    {
        
        sum+=i;
        if(i==4){
            continue;
        }
    printf("%d\n",sum);

    }
    return 0;
}