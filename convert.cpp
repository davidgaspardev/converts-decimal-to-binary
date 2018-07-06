/**
 * @author davidgaspar.dev@gmail.com (David Gaspar)
 */
#include <iostream> // library for input and output

int main() {

  // Classic Hello, World!
  std::cout << "Hello, World!" << std::endl;

  // Variable @type boolean
  bool validatedData;
  // Variable @type integer
  int decimal;

  do {

    try {

      // Console output
      // @type char[]
      std::cout << "Digite um número deciaml: ";

      // Console input
      // @type int (variable)
      std::cin >> decimal;

      // Condiction
      if(!std::cin) {

        validatedData = false;
        throw "error";

      }else {

        validatedData = true;

      }

    }catch(int) {

      std::cout << "e" << std::endl;
      std::cin.clear(); // Clear error flags

    }

  }while(!validatedData);

  return 1;
}
