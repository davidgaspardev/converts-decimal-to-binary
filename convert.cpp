/**
 * Convertor simple, from decimal to binary.
 *
 * @author davidgaspar.dev@gmail.com (David Gaspar)
 */
#include <iostream> // library for input and output
#include <limits>

int main() {

  // Classic "Hello, World!"
  std::cout << "Hello, World!" << std::endl;

  // Declared variable.
  // @type boolean (size: 1 byte - 8 bits)
  bool validatedData;

  // Declared variable.
  // @type integer (size: 4 bytes - 32 bits)
  int decimal;

  do {

    try {

      // Standard console output.
      // @type char[x]
      std::cout << "Enter a decimal number: ";

      // Standard console input.
      // @type int (variable)
      std::cin >> decimal;

      // Condiction
      if(!std::cin) {

        // If the data entered is not integer,
        // Will not be valid.
        validatedData = false;
        throw "error";

      }else {

        // If the data entered is integer,
        // Will be valid.
        validatedData = true;

      }

    }catch(...) {

      // Standard console output.
      // @type char[x]
      std::cout << "Data entered is not valid.\n" << std::endl;

      // Standard console input, clear error flags.
      std::cin.clear();

      // Standard console input, discard characters until newline is found.
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    }

  }while(!validatedData);

  return 1;
}
