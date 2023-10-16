
/**
  * Universidad de La Laguna
  * Grado en Ingenieria Informatica
  * Informatica Baasica 2023-2024
  *
  * @file time_decomposition.cc
  * @author Marco Perez Padilla alu0101469348@ull.edu.es
  * @date Oct 16 2023
  * @brief the program returns the time in hours minutes and seconds from a
  * seconds input
  * @bugs Non-sense time as output if negative numbers are given
  * @see https://jutge.org/problems/P37469_en
*/


#include <iostream>

int main () {
  int number_of_given_seconds {0};
  int number_of_hours {0};
  int number_of_minutes {0};
  int number_of_seconds {0};
  std::cin >> number_of_given_seconds;
  number_of_hours = number_of_given_seconds / 3600;
  number_of_minutes = (number_of_given_seconds / 60) - (60 * number_of_hours);
  number_of_seconds = number_of_given_seconds - (60 * number_of_minutes) - (3600
* number_of_hours);
  std::cout << number_of_hours << " " << number_of_minutes << " " <<
number_of_seconds;  
  return 0;
}
