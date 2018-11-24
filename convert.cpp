/**
 * Convertor simple, from decimal to binary.
 *
 * @author davidgaspar.dev@gmail.com (David Gaspar)
 */

// hash indicates preprocessor
#include <iostream> // library for input and output
#include <limits>
#include <sstream>
#include <string>

namespace patch
{
    template <typename T> std::string to_string(const T& n )
    {
        std::ostringstream stm ;
        stm << n ;
        return stm.str() ;
    }
}

std::string convertDecimalToBinary(int decimal) {

  std::string result;

  if(decimal == 0) return "0";

  while(decimal > 0) {

    result += patch::to_string(decimal%2);

    if(decimal == 1) break;

    decimal/=2;

  }

  //result = convert.str();

  return result;

}

int main() {

  // Classic "Hello, World!"
  std::cout << "Hello, World!" << std::endl;

  // Declared variable.
  // @type boolean (size: 1 byte - 8 bits)
  bool validatedData;

  // Declared variable.
  // @type integer (size: 4 bytes - 32 bits)
  // Opt: unsigned
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
      if(!std::cin || std::cin.fail()) {

        // If the data entered is not integer,
        // Will not be valid.
        validatedData = false;
        throw "error";

      }else {

        // Condiction
        if(decimal >= 0){

          // If the data entered is integer and positive,
          // Will be valid.
          validatedData = true;

        }else {

          // If the data entered is not integer and positive,
          // Will not be valid.
          validatedData = false;

          // Standard console output.
          // @type char stream
          std::cout << "[ERROR]: Negative numbers are invalid\n" << std::endl; // Print string literal

        }

      }

    }catch(...) {

      // Standard console output.
      // @type char stream
      std::cout << "[ERROR]: Data entered is not valid\n" << std::endl; // Print string literal

      // Standard console input, clear error flags.
      std::cin.clear();

      // Standard console input, discard characters until newline is found.
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    }

  }while(!validatedData);

  // Standard console output.
  // @type char stream
  std::cout << "Number typed: " << decimal << std::endl; // Print string literal

  std::string result = convertDecimalToBinary(decimal);

  std::cout << "Number typed in binary format: ";

  for(int i = (result.length() - 1); i >= 0; i--) std::cout << result[i];

  return 1;
}
