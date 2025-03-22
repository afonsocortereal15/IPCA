/**
 * @file calc.h
 * @author Afonso Corte-Real (a31500@alunos.ipca.pt)
 * @brief header file para a calculadora
 * @version 0.1
 * @date 2025-02-20
 * 
 * @copyright Copyright (c) 2025
 * 
 */

 #ifndef CALC_H
 #define CALC_H
 
 /**
  * @brief Retorna a soma de dois números.
  * @param a Primeiro número.
  * @param b Segundo número.
  * @return a + b
  */
 double soma(double a, double b);
 
 /**
  * @brief Retorna a subtração de dois números.
  * @param a Primeiro número.
  * @param b Segundo número.
  * @return a - b
  */
 double subtrai(double a, double b);
 
 /**
  * @brief Retorna o valor absoluto de um número.
  * @param x Número de entrada.
  * @return |x|
  */
 double valorAbs(double x);
 
 /**
  * @brief Retorna a divisão de dois números.
  * @param a Numerador.
  * @param b Denominador.
  * @return a / b (ou 0 se b == 0)
  */
 double divide(double a, double b);
 
 #endif