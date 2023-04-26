#include <stdio.h>

int main(){
     char n;
     int cut[26]={0};
     while(scanf("%c",&n) != EOF)
    {
        cut[n-'a']++;
    }
    for(char i='a';i<='z';i++){
        printf("%c - %d\n",i,cut[i-'a']);
    }

    return 0;
}