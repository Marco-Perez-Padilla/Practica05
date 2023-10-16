/**
  * Universidad de La Laguna
  * Grado en Ingenieria Informatica
  * Informatica Baasica 2023-2024
  *
  * @file Sum_of_3_int_numbers.cc
  * @author Marco Perez Padilla alu0101469348@ull.edu.es
  * @date Oct 16 2023
  * @brief the program gives the result of the sum of three given numbers
  * @bugs There are no known bugs
  * @see https://jutge.org/problems/P41221_en
*/

#include <iostream>

int main () {
  int number1 {0};
  int number2 {0};
  int number3 {0};
  std::cin >> number1;
  std::cin >> number2;
  std::cin >> number3;
  std::cout << number1 + number2 + number3;
  return 0;
}
