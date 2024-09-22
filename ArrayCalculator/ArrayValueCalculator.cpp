#include "ArrayValueCalculator.h"
#include <string.h>

ArraySizeException::ArraySizeException(const char* message)
{
	strcpy_s(m_message, message);
}

const char* ArraySizeException::GetMessage() const
{
	return m_message;
}

ArrayDataException::ArrayDataException(int row, int col)
{
    sprintf_s(m_message, "Invalid number of row or col", row, col);
}

const char* ArrayDataException::GetMessage() const
{
	return m_message;
}

int ArrayValueCalculator::doCalc(const string arr[4][4]) {
    int sum = 0;

    for (int i = 0; i < 4; ++i) 
    {
        for (int j = 0; j < 4; ++j) 
        {
            try 
            {
                sum += stoi(arr[i][j]);
            }
            catch (...) 
            {
                throw ArrayDataException(i, j);
            }
        }
    }
    return sum;
}
