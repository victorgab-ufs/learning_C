#include <stdio.h>

int main(){

    int casos = 0;
    scanf("%d", &casos);

    for (int i = 0; i <= casos; i++){
        

        for (int j = 0; j <= i; j++){

            if (i < 10) {
                printf("%d", i);
                
            }

            else printf("%d", i % 10);
            
        }
    
        printf("\n");
    }
    return 0;
}
