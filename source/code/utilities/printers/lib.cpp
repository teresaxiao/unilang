#include "code/utilities/printers/lib.hpp"
#include <iostream>

void Output_And_Flush(std::string const& message){
  std::cout << message; std::cout.flush();
  return;
}
void Print_Newline(){
  std::cout << "\n";
}
