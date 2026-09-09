#include <stdio.h>

void exercicio2(void){
    int a,b,c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a>0 && b>0 && c>0 && a+b+c == 180){
        printf("pode ser triangulo");
    }
    else{
        printf("nao é triangulo");
    }
}

int exercicio3(){
    float a,b,c, discriminante = 0;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    if (a==0){
        printf("coeficiente igual a 0");
        return 0;
    }
    else {
        if (a>0) {
            printf("concavidade pra cima");
            discriminante = b*b - 4*a*c;
            if (discriminante<0){
                printf("nao possui raizes reais");
                printf("discriminante: %f", discriminante);
                return 0;
            }
            else if (discriminante == 0) {
                printf("possui uma raiz real");
                printf("discriminante: %f", discriminante);
                return 0;
            }
            else {
                printf("possui duas raizes reais");
                printf("discriminante: %f", discriminante);
                return 0;
            }
        }
        else {
            printf("concavidade pra baixo");
            discriminante = b*b - 4*a*c;
            if (discriminante<0){
                printf("nao possui raizes reais");
                printf("discriminante: %f", discriminante);
                return 0;
            }
            else if (discriminante == 0) {
                printf("possui uma raiz real");
                printf("discriminante: %f", discriminante);
                return 0;
            }
            else {
                printf("possui duas raizes reais");
                printf("discriminante: %f", discriminante);
                return 0;
            }
        }
    }
    return 0;
}

int exercicio4(void){
    float a,b,c;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    while (a!= 0){
        if(a > 0 && b > 0 && c>0 && a+b > c && a + c > b && c+b > a){
            if (a == b && a == c){
                printf("triangulo equilatero");
            }
            else if (a == b || a == c || c == b) {
                printf("triangulo isosceles");
            }
            else {
                printf("triangulo escaleno");
            }
        }
        else {
            printf("nao é triangulo");
        }
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    }
    return 0;
}

int exercicio5(void){
    float notas[10], notas_final[10];
    int faltas[10], eliminados = 0,  i;
    for (i=0;i<10;i++){
        scanf("%f %d", &notas[i], &faltas[i]);
        if (notas[i]<6 || faltas[i]>3){
            eliminados++;
        }
    }
    for (i=0; i<10; i++){
        notas_final[i] = notas[i] - faltas[i];
        if (notas_final[i]<0){
            notas_final[i] = 0;
        } 
        printf("%f\n", notas_final[i]);
    }
    printf("eliminados: %d", eliminados);
    return 0;
}

int exercicio6(void){
    int matriz[4][4];
    int i,j;
    int soma_elementos = 0, acima_diagonal = 0;
    for (i=0;i<4;i++){
        for (j=0;j<4;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i=0;i<4;i++){
        for(j=0;j<4;j++){
            if (i==j){
                soma_elementos += matriz[i][j];
            }
            if (i<j){
                acima_diagonal += matriz[i][j];
            }
        }
    }
    printf("%d \n %d", soma_elementos,acima_diagonal);
    return 0;
}

int exercicio7(void){
    int matriz[5][5];
    int i,j;
    int abaixo_zerada = 1, acima_zerada = 1;
    for (i=0;i<5;i++){
        for (j=0;j<5;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i=0;i<5;i++){
        for (j=0;j<5;j++){
            if (i>j && matriz[i][j] != 0){
                abaixo_zerada = 0;
            }
            if (i<j && matriz[i][j] != 0){
                acima_zerada = 0;
            }
        }
    }
    if (abaixo_zerada && acima_zerada){
        printf("MATRIZ DIAGONAL");
    }
    else if (abaixo_zerada){
        printf("TRIANGULAR SUPERIOR");
    }
    else if (acima_zerada){
        printf("TRIANGULAR INFERIOR");
    }
    else {
        printf("NAO E TRIANGULAR");
    }
    return 0;
}

int main(){
    exercicio7();
    return 0;
}