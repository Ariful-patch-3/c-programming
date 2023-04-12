#include <stdio.h>
int main(){
  long long int a,b,c,d,e,f,g,h;
  scanf("%lld %lld %lld",&a,&b,&c);
  if(a<b&&a<c){
    d=a;
  }
  else if(b<a&&b<c){
    d=b;
  }
  else{
    d=c;
  }
  e=a-d;
  f=c-d;
  
  g=e/2;
  if(g<f){
   h=g+d;
  }
  else{
    h=f+d;
  }
  
 printf("%lld",h);

    return 0;
}
