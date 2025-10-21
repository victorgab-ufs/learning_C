#include <stdio.h>

int main(){

    // definicao das variaveis
    float t1, t2, t3, t4, s, p1, p2;

    // input -> notas dos trabalhos, seminário e projetos 
    scanf("%f %f %f %f", &t1, &t2, &t3, &t4);
    scanf("%f", &s);
    scanf("%f %f", &p1, &p2);

    // calculo das notas atraves de media ponderada

    // trabalhos
    float nt = (t1*1+t2*2+t3*3+t4*2)/8;
    // seminario
    float ns = s;
    // provas
    float np = (p1*4+p2*6)/10;
    // final
    float nf = (nt*4+ns*2+np*4)/10;

    // output
    printf("NT = %.2f\nNS = %.2f\nNP = %.2f\nNF = %.2f\n", nt, ns, np, nf);
    
    return 0;
}
