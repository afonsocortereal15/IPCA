/**
 * @file main.c
 * @author Afonso Corte-Real (a31500@alunos.ipca.pt)
 * @brief 
 * @version 0.1
 * @date 2025-02-20
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdio.h>
#include "./calc.h"

int main() {
  double a = 10, b = -3;

  printf("Soma (%.2f + %.2f) = %.2f\n", a, b, soma(a, b));
  printf("Subtrai (%.2f - %.2f) = %.2f\n", a, b, subtrai(a, b));
  printf("Valor absoluto de %.2f = %.2f\n", b, valorAbs(b));
  printf("Divide (%.2f / %.2f) = %.2f\n", a, b, divide(a, b));

  return 0;
}