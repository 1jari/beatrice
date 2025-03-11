#include <iostream>
#include "./versis/versis.hpp"
int main() {  
  std::cout << "Beatrice V" << BEATRICE_VERSION_NUMBER << " - ";
  std::cout << "'" << BEATRICE_VERSION_NAME << "'";
  std::cout << " :: " << BEATRICE_COPYRIGHT << std::endl;

  versis::robot rb(2);
  return 0;
}
