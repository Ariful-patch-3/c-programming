#include <stdio.h>
int main(){
    char a;
    int sum;
    
    scanf("%c",&a);
    if(a=='z'||a=='Z'){
        sum=a-25;
        printf("%c",sum);
    }
    else{
    sum=a+1;
    printf("%c",sum);
    }
   

    return 0;
}
