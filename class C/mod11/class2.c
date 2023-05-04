#include <stdio.h>

int small_to_capital(char a)
{
   int s=a+32;
    return s;
}
int main(){
     char a;
    scanf("%C",&a);
   
    int sum=small_to_capital(a);
    printf("%C\n",sum);


    return 0;

  
}
