#include <stdio.h>
#include <stdlib.h>
int main(){
  int n, k, t=0;
  int *array;
  scanf("%d%d", &n, &k);
  //allocating memory
  array = (int*) malloc(n *sizeof(int));
  //taking points input
  for(int i=0;i<n;i++){
    scanf("%d", &array[i]);
  }
  //checking next round participants
  for(int i=0;i<n;i++){
    if(array[i]>=k){
      t++;
    }
  }
  printf("%d\n", t);
  free(array);
  return 0;
}
