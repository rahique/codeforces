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
