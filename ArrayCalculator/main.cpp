#include <iostream>
#include "ArrayValueCalculator.h"
#include <string.h>
using namespace std;

int main() {
    string validArray[4][4] = {
        {"7", "7", "7", "7"},
        {"8", "8", "8", "8"},
        {"9", "9", "9", "9"},
        {"10", "10", "10", "10"}
    };
    string invalidArray[4][4] = {
        {"1", "X", "3", "4"},
        {"5", "6", "X", "8"},
        {"9", "10", "11", "12"},
        {"X", "14", "15", "X"}
    };
    ArrayValueCalculator calc;
    try {
     
        int result = calc.doCalc(validArray);
        cout << "Sum: " << result << endl;
    }
    catch (ArraySizeException& exception) {
        cout << "Error: " << exception.GetMessage() << endl;
    }
    catch (ArrayDataException& exception) {
        cout << "Error: " << exception.GetMessage() << endl;
    }
    try {
      
        int result = calc.doCalc(invalidArray);
        cout << "Sum: " << result << endl;
    }
    catch (ArraySizeException& exception) {
        cout << "Error: " << exception.GetMessage() << endl;
    }
    catch (ArrayDataException& exception) {
        cout << "Error: " << exception.GetMessage() << endl;
    }
    return 0;
}