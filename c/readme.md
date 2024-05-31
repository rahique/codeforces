## Problem

[Watermelon](https://codeforces.com/problemset/problem/4/A),
[Long Words](https://codeforces.com/problemset/problem/71/A),
[Bit++](https://codeforces.com/problemset/problem/282/A),
[Team](https://codeforces.com/problemset/problem/231/A),
[Next Round](https://codeforces.com/problemset/problem/158/A),
[Domino Piling](https://codeforces.com/problemset/problem/50/A),
[Beautiful Matrix](https://codeforces.com/problemset/problem/263/A)

## Code

[Watermelon](#watermelon),
[Long Words](#long-words),
[Bit++](#bit),
[Team](#team),
[Next Round](#next-round),
[Domino Piling](#domino-piling),
[Beautiful Matrix](#beautiful-matrix)

### Watermelon

[TOP](#problem)
// Code for Watermelon problem

```
#include <stdio.h>
int main() {
    int w;
    scanf("%d", &w);
    if (w > 2 && w % 2 == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}

```

### Long Words

[TOP](#problem)
// Code for Long Words problem

```#include <stdio.h>
#include <string.h>

void shortWord(char *word){
  int length = strlen(word);
  if(length > 10){
    printf("%c%d%c\n", word[0], length - 2 , word[length - 1]);
  }else {
    printf("%s\n", word);
  }
}

int main(){
  int n;
  scanf("%d", &n);

  char word[101];
  for(int i=0; i < n; i++){
    scanf("%s", word);
    shortWord(word);
  }
  return 0;
}
```

### Bit++

[TOP](#problem)
// Code for Bit++ problem

```
#include <stdio.h>
#include <string.h>
int main(){
    int n, x = 0;
    char input[4];

    scanf("%d", &n);
    //checking if 1<=n<=15
    if(n<=150 && n>=1){
    //chcking if input has ++ or ---
    for(int i=0; i<n; i++){

        scanf("%s", &input);
    //strstr returns a non-Null pointer if ++ is in input Null if doesnt
        if(strstr(input, "++")){
            x++;
            }
    //strstr returns a non-Null pointer if ++ is in input Null if doesnt
        else if(strstr(input, "--")){
            x--;
            }
        }
    }
    printf("%d\n", x);
    return 0;
}
```

### Team

[TOP](#problem)
// Code for Team problem

```
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
```

### Next Round

[TOP](#problem)
// Code for Next Round problem

```
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
    if(array[i]>=array[k-1] && array[i]>0){
      t++;
    }
  }
  printf("%d\n", t);
  free(array);
  return 0;
}
```

### Domino Piling

[TOP](#problem)
// Code for Domino Piling problem

```
#include <stdio.h>
int main(){
  int M,N;
  scanf("%d%d", &M, &N);
  int board = M*N;
  printf("%d\n", board/2);
}
```

### Beautiful Matrix

[TOP](#problem)
// Code for Domino Beautiful Matrix

```
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
  //calculating moves
  k = abs(row-2) + abs(col-2);
  printf("%d\n", k);

  return 0;
}
```
