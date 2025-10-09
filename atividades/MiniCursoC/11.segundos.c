#include <stdio.h>

int main(){

    int h, min, s;
    
    scanf("%dh%dmin", &h, &min);
    s = (h*3600)+(min*60);
    
    printf("s = %d", s);
    
    return 0;
    
}
