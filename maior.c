#include <stdio.h>

int main(){
    
    int a, b = 0;

    scanf("%d %d", &a, &b);

    if (a > b) 
        printf("a eh maior\n");

    else if (a < b)
        printf("b eh maior\n");

    else
        printf("a e b sao iguais\n");
    
    return 0;
}