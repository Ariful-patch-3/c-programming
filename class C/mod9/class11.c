#include <stdio.h>
#include <string.h>
int main(){
    char n[1001];
    scanf("%s",n);
    int a=0,b=0;
    for(int i=0;i<strlen(n);i++){
      if(n[i]>='A' && n[i]<='Z'){
        a++;
      
      }
      else {
      b++;
       
      }
    }
    printf("%d %d",a,b);
    
    return 0;
}
