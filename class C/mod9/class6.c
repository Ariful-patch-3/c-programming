#include <stdio.h>
#include <string.h>
int main(){
    int n;
    scanf("%d",&n);
    char a[n];
    int sum=0;
    scanf("%s",a);
    for(int i=0;i<strlen(a);i++){
        sum=sum+(a[i]-48);

    }
   printf("%d ",sum);
    
    return 0;
}
