#include <math.h>
#include <stdio.h>
void exercicio1(void) {
  float nota1, nota2;
  printf("Nota 1: \n");
  scanf("%f", &nota1);
  printf("Nota 2: \n");
  scanf("%f", &nota2);
  float mediapond = (2 * nota1 + 3 * nota2) / 5;
  printf("Media Ponderada: %f", mediapond);
}

void exercicio2(void) {
  float salario, vendas;
  printf("Salario: \n");
  scanf("%f", &salario);
  printf("Vendas: \n");
  scanf("%f", &vendas);
  float comissao = vendas * 0.04;
  float salariofinal = salario + comissao;
  printf("salario final: %.2f", salariofinal);
}

void exercicio3(void) {
  float peso;
  printf("peso atual em kilos: \n");
  scanf("%f", &peso);
  float pesoengordando = peso * 1.15;
  float pesoemagrecendo = peso * 0.80;
  printf("se voce engordar, tera em kilos: %f\n", pesoengordando);
  printf("se voce emagrecer, tera em kilos: %f", pesoemagrecendo);
}

void exercicio4(void) {
  float basemenor, basemaior, altura;
  printf("Base menor(cm):");
  scanf("%f", &basemenor);
  printf("Base maior(cm):");
  scanf("%f", &basemaior);
  printf("Altura(cm):");
  scanf("%f", &altura);
  float areatrap = ((basemaior + basemenor) * altura) / 2;
  printf("A area do trapezio é em cm: %f", areatrap);
}

void exercicio5(void) {
  int nascimento, atual;
  printf("Ano do nascimento:");
  scanf("%d", &nascimento);
  printf("Ano atual:");
  scanf("%d", &atual);
  int anos = atual - nascimento;
  int meses = anos * 12;
  int dias = anos * 365;
  int semanas = dias / 7;
  printf("anos: %d\n", anos);
  printf("meses: %d\n", meses);
  printf("semanas: %d\n", semanas);
  printf("dias: %d\n", dias);
}

void exercicio6(void) {
  int fatias;
  printf("fatias consumidas:");
  scanf("%d", &fatias);
  int pizzas = fatias / 8;
  int proxima = fatias % 8;
  int proximapizza = 8 - proxima;
  if (proxima == 0) {
    proximapizza = 0;
  }
  printf("pizzas completas: %d\n", pizzas);
  printf("fatias para completar a proxima: %d\n", proximapizza);
}

void exercicio7(void) {
  float fahrenheit;
  printf("fahrenheit:");
  scanf("%f", &fahrenheit);
  float celsius = (fahrenheit - 32) / 1.8;
  printf("celsius: %f\n", celsius);
}

void exercicio8(void) {
  float raio;
  float pi = 3.14159;
  printf("raio:");
  scanf("%f", &raio);
  float comprimento = 2 * pi * raio;
  float area = raio * raio * pi;
  printf("area: %f\n", area);
  printf("comprimento: %f\n", comprimento);
}

void exercicio9(void) {
  float tensao, resistencia;
  printf("tensao(volts): ");
  scanf("%f", &tensao);
  printf("resistencia (ohms): ");
  scanf("%f", &resistencia);
  float corrente = tensao / resistencia;
  printf("corrente eletrica: %f\n", corrente);
}

void exercicio10(void) {
  float oposto, adjacente;
  printf("cateto oposto:");
  scanf("%f", &oposto);
  printf("cateto adjacente:");
  scanf("%f", &adjacente);
  float hipotenusa = sqrt(oposto * oposto + adjacente * adjacente);
  printf("hipotenusa: %f\n", hipotenusa);
}
