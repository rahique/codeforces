#include <stdio.h>
#include <stdlib.h>
int main(){
  int matrix[5][5];
  int i,j,k=0;
  int row=-1, col=-1;

  for(i = 0; i < 5;i++){
    for (j = 0; j < 5; j++) {
      scanf("%d", &matrix[i][j]);
      if(matrix[i][j]==1){
          row=i;
          col=j;
        }
      }
    }
  
  k = abs(row-2) + abs(col-2);
  printf("%d\n", k);

  return 0;
}
