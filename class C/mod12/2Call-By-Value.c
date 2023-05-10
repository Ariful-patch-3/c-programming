#include <stdio.h>

void fun(int x)
{
    printf("fun x er addrass %p\n",x);
   
}
int main(){
   int x=10;
   printf("main x er addrass %p\n",x);
   fun(x);
    
    return 0;


}
