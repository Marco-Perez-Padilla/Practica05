/**
  * Universidad de La Laguna
  * Grado en Ingenieria Informatica
  * Informatica Baasica 2023-2024
  *
  * @file boolean_operators.cc
  * @author Marco Perez Padilla alu0101469348@ull.edu.es
  * @date Oct 14 2023
  * @brief the program gives the truth table for p and q
  * @bugs There are no known bugs
*/

#include <iostream>

int main () {
  bool p {true};
  bool q {true};
  bool p_and_q {p && q};         //*Bloque de &&
  bool notp_and_notq {!p && !q};
  bool notp_and_q {!p && q};
  bool p_and_notq {p && !q};
  bool notp {!p};                //*Bloque de !
  bool notq {!q};
  bool p_or_q {p || q};          //*Bloque de ||
  bool p_or_notq {p || !q};
  bool notp_or_q {!p || q};
  bool notp_or_notq {!p || !q};
  std::cout << "P  Q  AND  NOTQ  NOTP  OR" << std::endl;
  std::cout << p << "  " << q << "   " << p_and_q << "     " << !q << "     " << !p <<
"    " << p_or_q << std::endl;
  std::cout << p << "  " << !q << "   " << p_and_notq << "     " << q << "     " << !p
<< "    " << p_or_notq << std::endl;
  std::cout << !p << "  " << q << "   " << notp_and_q << "     " << !q << "     " << p
<< "    " << notp_or_q << std::endl;
  std::cout << !p << "  " << !q << "   " << notp_and_notq << "     " << q << "     "
<< p << "    " << notp_or_notq << std::endl;
  return 0;
}
