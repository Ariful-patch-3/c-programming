#include <stdio.h>
#include <string.h>

int is_palindrome(char s[]){
     int k=1;
        //printf("%s",s);
        int j=strlen(s)-1;
       for(int i=0;i<strlen(s);i++){
        if(s[i]==s[j]){
          k=1;
        }
        else{
          k=0;
          break;
        }
        j--;
       }

       return k;
}

int main(){
    char s[1001];
        scanf("%s",&s);
     int k = is_palindrome(s);  
     
       if(k==1){
         printf("Palindrome");
       }
      else if(k==0)
      {
         printf("Not Palindrome");
      }
      
    return 0;
}