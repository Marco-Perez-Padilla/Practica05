
/**
  * Universidad de La Laguna
  * Grado en Ingenieria Informatica
  * Informatica Baasica 2023-2024
  *
  * @file desinflado.cc
  * @author Marco Perez Padilla alu0101469348@ull.edu.es
  * @date Oct 14 2023
  * @brief the program gives the minuscule form of a capital letters
  * @bugs If a non-letter charachter is typed, its output won't be a letter
*/

 #include <iostream>

 int main () {
  char mayuscula {'a'};
  std::cout << "Introduzca una letra en mayusculas: " << std::endl;
  std ::cin >> mayuscula;
  int post_mayuscula = static_cast <int> (mayuscula);
  int pre_minuscula = post_mayuscula + 32;
  char minuscula = static_cast <char> (pre_minuscula);
  std::cout << mayuscula << " " << minuscula << std::endl;
  return 0;
}
