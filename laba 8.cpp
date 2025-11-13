/********************************
 * Автор: Щербакова Кристина    *
 * Вариант: 14                  *
 ********************************/
 
#include <iostream>
using namespace std;

int main() {
  int arrayOfStandardArabicNumerals[18] = {9000, 5000, 4000, 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
  string arrayOfStandardRomanNumeralRepresentations[18] = {"MHH", "H", "MH", "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
  string finalConvertedRomanNumeralResult = "";
  int userInputNumberValue, currentLoopIndexCounter;

  cout << "Please enter a number < 9000: ";
  cin >> userInputNumberValue;

  while (userInputNumberValue > 0) {
    for (currentLoopIndexCounter = 0; currentLoopIndexCounter < 16; ++currentLoopIndexCounter) {
      if (userInputNumberValue >= arrayOfStandardArabicNumerals[currentLoopIndexCounter]) {
        finalConvertedRomanNumeralResult += arrayOfStandardRomanNumeralRepresentations[currentLoopIndexCounter]; 
        userInputNumberValue -= arrayOfStandardArabicNumerals[currentLoopIndexCounter];
        break;
      }
    }
  }
  
  cout << finalConvertedRomanNumeralResult;

  return 0;
} 
