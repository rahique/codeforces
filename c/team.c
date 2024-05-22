#include <stdio.h>
int main(){
  int n;
  int array[3];
  int answered=0;
  scanf("%d", &n);
  for(int i = 0; i!=n; i++){
    scanf("%d%d%d", &array[0], &array[1], &array[2]);
    int aggring = 0;
    for(int j = 0;j != 3; j++){
      if(array[j]==1){
        aggring++;
      }
    }
    if(aggring>=2){
      answered++;
    }
  }
  printf("%d\n", answered);
  return 0;
}
