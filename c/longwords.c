#include <stdio.h>
#include <string.h>

void shortWord(char *word){
  int length = strlen(word);
  if(length > 10){
    printf("%c%d%c\n", word[0], length - 2 , word[length - 1]);
  }else printf("%s\n", word);
}

int main(){
  int n;
  scanf("%d", &n);

  char word[101];
  for(int i; i <= n; i++){
    scanf("%s", word);
    shortWord(word);
  }
  return 0;
}
