#include <stdio.h>
int main(){
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    int elamate=row*col;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int cut=0;
   for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
          if(a[i][j]==0){
             cut++;
          }
        }
       
    }
    printf("%d\n",cut);
    if(elamate==cut){
        printf("zero matrix");
    }
    else{
        printf("not zero matrix");
    }

 return 0;
 
}
// 4 3
// 0 0 0
// 0 0 0
// 0 0 0
// 0 0 0

// 4 3
// 0 0 0
// 0 0 5
// 0 0 0
// 0 0 0