// ALUNO1 = Felipe Piva Silva RA: 26006616
// ALUNO2 = Vinicius Hegues Baiocco RA: 26009531
#include <math.h>
#include <stdio.h>
void exercicio01() {
  int a, b;
  scanf("%d", &a);
  scanf("%d", &b);
  if (a == b) {
    printf("Os numeros %d e %d são iguais", a, b);
  } else {
    if (a > b) {
      printf("O numero %d é maior que o numero %d", a, b);
    } else {
      printf("O numero %d é maior que o numero %d", b, a);
    }
  }
}

void exercicio02() {
  int x1, x2, result;

  printf("Digite x1: ");
  scanf("%d", &x1);

  printf("Digite x2; ");
  scanf("%d", &x2);

  result = x1 - x2;

  if (result >= 0) {
    printf("O módulo é de: %d\n", result);
  } else {
    result = result * -1;
    printf("O módulo é de: %d\n", result);
  }
}

void exercicio03() {
  float temperatura;
  scanf("%f", &temperatura);
  if (temperatura < 25) {
    printf("A temperatura %f está fria", temperatura);
  } else if (temperatura >= 25 && temperatura <= 30) {
    printf("A temperatura %f está morna", temperatura);
  } else {
    printf("A temperatura %f está quente", temperatura);
  }
}

void exercicio04() {
  int qtnd;
  float valor, valor_f;

  printf("Digite a quantidade de caixas que vai comprar: ");
  scanf("%d", &qtnd);

  if (qtnd > 10) {
    valor = 9.5;
    valor_f = valor * qtnd;
  } else {
    valor = 12;
    valor_f = valor * qtnd;
  }
  printf("O valor total da compra: %f", valor_f);
}

void exercicio05() {
  float altura, pesoideal;
  char sexo;
  scanf(" %c", &sexo);
  scanf("%f", &altura);
  if (sexo == 'M' || sexo == 'm') {
    pesoideal = 72.7 * altura - 58;
    printf("O seu peso ideal é %f", pesoideal);

  } else {
    pesoideal = 62.1 * altura - 44.7;
    printf("O seu peso ideal é %f", pesoideal);
  }
}

void exercicio06() {
  float x, y, result;
  int op;

  printf("Digite o valor de x: ");
  scanf("%f", &x);

  printf("Digite o valor de y: ");
  scanf("%f", &y);

  printf("Digite uma opção: \n1 - adição \n2 - subtração \n3 - multiplicação "
         "\n4 - divisão\n");
  scanf("%d", &op);

  switch (op) {
  case 1:
    result = x + y;
    break;

  case 2:
    result = x - y;
    break;

  case 3:
    result = x * y;
    break;

  case 4:
    if (y != 0) {
      result = x / y;
      break;
    } else {
      printf("Erro, encerrando programa...");
      return;
    }

  default:
    printf("Opção Inválida.");
    return;
  }
  printf("Resultado: %f", result);
}

void exercicio07() {
  int lados;
  float lado, area;
  scanf("%d", &lados);
  scanf("%f", &lado);
  if (lados < 3 || lados > 5) {
    printf("Inserçao de lados menor que 3 ou maior que 5, apenas inserir 3, 4 "
           "ou 5");
  } else {
    if (lados == 3) {
      area = (sqrt(3) / 4) * pow(lado, 2);
      printf("TRIANGULO: %f", area);
    } else if (lados == 4) {
      area = pow(lado, 2);
      printf("QUADRADO: %f", area);

    } else {
      area = (5 * pow(lado, 2)) / (4 * tan(3.14159 / 5));
      printf("PENTAGONO: %f", area);
    }
  }
}

void exercicio08() {
  float x1, x2, x3, x4, x5, med, desv;
  int qtnd_med;

  qtnd_med = 0;
  printf("Digite valor de x1: ");
  scanf("%f", &x1);

  printf("Digite valor de x2: ");
  scanf("%f", &x2);

  printf("Digite valor de x3: ");
  scanf("%f", &x3);

  printf("Digite valor de x4: ");
  scanf("%f", &x4);

  printf("Digite valor de x5: ");
  scanf("%f", &x5);

  med = (x1 + x2 + x3 + x4 + x5) / 5.0;
  desv = sqrt(((pow(x1 - med, 2)) + (pow(x2 - med, 2)) + (pow(x3 - med, 2)) +
               (pow(x4 - med, 2)) + (pow(x5 - med, 2))) /
              5.0);

  if (x1 > med) {
    qtnd_med += 1;
  }
  if (x2 > med) {
    qtnd_med += 1;
  }
  if (x3 > med) {
    qtnd_med += 1;
  }
  if (x4 > med) {
    qtnd_med += 1;
  }
  if (x5 > med) {
    qtnd_med += 1;
  }

  printf("Média: %f \nDesvio Padrão: %f \nQuantidade acima da média: %d\n", med,
         desv, qtnd_med);
}

int main() {
  int op;
  do {
    printf("\nLista 01\n");
    printf("\nEscolha o número do exercício: ");
    scanf("%d", &op);
    switch (op) {
    case 1:
      exercicio01();
      break;
    case 2:
      exercicio02();
      break;
    case 3:
      exercicio03();
      break;
    case 4:
      exercicio04();
      break;
    case 5:
      exercicio05();
      break;
    case 6:
      exercicio06();
      break;
    case 7:
      exercicio07();
      break;
    case 8:
      exercicio08();
      break;
    case 0:
      break;
    default:
      printf("\nOpção inválida!\n");
      break;
    }
  } while (op != 0);
  return 0;
}