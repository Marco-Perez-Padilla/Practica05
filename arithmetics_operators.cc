
/**
  * Universidad de La Laguna
  * Grado en Ingenieria Informatica
  * Informatica Baasica 2023-2024
  *
  * @file arithmetics_operators.cc
  * @author Marco Perez Padilla alu0101469348@ull.edu.es
  * @date Oct 14 2023
  * @brief the program gives the result of all possible arithmetics operations
  * between two given numbers
  * @bugs The program will not run if a not int number is given
*/


#include <iostream>

int main () {
  int numero1 {0};
  int numero2 {0};
  std::cout << "Introduzca un numero: " << std::endl;
  std::cin >> numero1;
  std::cout << "Introduzca otro numero: " << std::endl;
  std::cin >> numero2;
  std::cout << numero1 << "+" << numero2 << "=" << numero1 + numero2 <<
std::endl;
  std::cout << numero1 << "-" << numero2 << "=" << numero1 - numero2 <<
std::endl;
  std::cout << numero1 << "*" << numero2 << "=" << numero1 * numero2 <<
std::endl;
  std::cout << numero1 << "/" << numero2 << "=" << numero1 / numero2 <<
std::endl;
  std::cout << numero1 << "%" << numero2 << "=" << numero1 % numero2 <<
std::endl;
  std::cout << numero1 << ">" << numero2 << ":" << (numero1 > numero2) <<
std::endl;
  std::cout << numero1 << ">=" << numero2 << ":" << (numero1 >= numero2) <<
std::endl;
  std::cout << numero1 << "<" << numero2 << ":" << (numero1 < numero2) <<
std::endl;
  std::cout << numero1 << "<=" << numero2 << ":" << (numero1 <= numero2) <<
std::endl;
  std::cout << numero1 << "!=" << numero2 << ":" << (numero1 != numero2) <<
std::endl;
  std::cout << "Nota: En operadores logicos: 0=False, 1=True" << std::endl;
  return 0;
}


