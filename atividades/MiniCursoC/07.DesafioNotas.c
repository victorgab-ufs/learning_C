#include <stdio.h>

int main(){

    float t1, t2, t3, t4, s, p1, p2;
    
    scanf("%f %f %f %f", &t1, &t2, &t3, &t4);
    scanf("%f", &s);
    scanf("%f %f", &p1, &p2);
    
    float nt = (t1*1+t2*2+t3*3+t4*2)/8;
    float ns = s;
    float np = (p1*4+p2*6)/10;
    float nf = (nt*4+ns*2+np*4)/10;
    
    printf("NT = %.2f\nNS = %.2f\nNP = %.2f\nNF = %.2f\n", nt, ns, np, nf);
    
    return 0;
}
