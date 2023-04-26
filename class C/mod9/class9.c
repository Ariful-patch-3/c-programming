#include <stdio.h>
#include <string.h>
int main(){
    char n[1001];
    scanf("%s ",n);
    
    int a=0,e=0,j=0,o=0,u=0;
     for(int i=0;i<strlen(n);i++){
      if(n[i]=='a'){
        a++;
        
      }
      else if(n[i]=='e'){
        e++;
      }
       else if(n[i]=='i'){
        j++;
      }
      else if(n[i]=='o'){
        o++;
      }
       else if(n[i]=='u'){
        u++;
      }
    }
     int sum=a+e+j+o+u;
    
      printf("%d",sum);
     
    
    return 0;
}