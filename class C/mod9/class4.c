#include <stdio.h>
#include <string.h>
int main(){
    char a[100];
    scanf("%s ",a);
    
   int cnt[26]={0};
     for(int i=0;i<strlen(a);i++){
        int vlo=a[i]-'a';
        cnt[vlo]++;
    }
     for(int i=0;i<26;i++){
    printf("%d-%d\n",i,cnt[i]);
     }
    return 0;
}
