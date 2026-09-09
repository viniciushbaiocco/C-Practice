#include <stdio.h>
void exercicio1(void) {
  float um, dois;
  scanf("%f", &um);
  scanf("%f", &dois);
  float soma = um + dois;
  float produto = um * dois;
  printf("%f \n", soma);
  printf("%f \n", produto);
}

void exercicio2(void) {
  float tempo, distancia;
  scanf("%f", &tempo);
  scanf("%f", &distancia);
  float velmedia = distancia / tempo;
  printf("velocidade media: %f", velmedia);
}

void exercicio3(void) {
  float p1, p2, p3;
  scanf("%f", &p1);
  scanf("%f", &p2);
  scanf("%f", &p3);
  float mediaponderada = (p1 + 2 * p2 + 3 * p3) / 6;
  printf("media ponderada: %.2f", mediaponderada);
}

void exercicio4(void) {
  float celsius;
  scanf("%f", &celsius);
  float fahrenheit = ((9.0 / 5.0) * celsius) + 32.0;
  printf("fahrenheit: %.2f", fahrenheit);
}

void exercicio5(void) {
  float base, altura;
  scanf("%f", &base);
  scanf("%f", &altura);
  float area = base * altura;
  float perimetro = 2 * (base + altura);
  printf("area: %.2f\n", area);
  printf("perimetro: %.2f", perimetro);
}

void exercicio6(void) {
  int um, dois;
  scanf("%d", &um);
  scanf("%d", &dois);
  int inteiro = um / dois;
  int resto = um % dois;
  printf("%d\n", inteiro);
  printf("%d", resto);
}

void exercicio7(void) {
  int segundos;
  scanf("%d", &segundos);
  int minutos = segundos / 60;
  int restantes = segundos % 60;
  printf("%d\n", minutos);
  printf("%d", restantes);
}

void exercicio8(void) {
  float pago, produto;
  scanf("%f", &pago);
  scanf("%f", &produto);
  int troco = pago - produto;
  int cel50, cel20, cel10, cel5, cel2, cel1;
  cel50 = troco / 50;
  troco = troco % 50;
  cel20 = troco / 20;
  troco = troco % 20;
  cel10 = troco / 10;
  troco = troco % 10;
  cel5 = troco / 5;
  troco = troco % 5;
  cel2 = troco / 2;
  troco = troco % 2;
  cel1 = troco / 1;
  printf("50: %d\n", cel50);
  printf("20: %d\n", cel20);
  printf("10: %d\n", cel10);
  printf("5:  %d\n", cel5);
  printf("2:  %d\n", cel2);
  printf("1:  %d\n", cel1);
}
