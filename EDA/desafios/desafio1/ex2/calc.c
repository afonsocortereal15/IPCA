/**
 * @file calc.c
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

double soma(double a, double b) {
  return a + b;
}

double subtrai(double a, double b) {
  return a - b;
}

double valorAbs(double x) {
  return (x < 0) ? -x : x;
}

double divide(double a, double b) {
  if (b == 0) {
    printf("Erro: divisão por zero.\n");
    return 0.0;
  }
  return a / b;
}