#include<stdio.h>
int main(){
    char a;
    scanf("%C",&a);
   
  
    //(a>=97&&a<=122)
    if(a>='a'&&a<='z'){
        int sum=a-32;
        printf("%C\n",sum);

    }
else{
    int sum=a+32;
    printf("%c\n",sum);
    }

  
    return 0;
}