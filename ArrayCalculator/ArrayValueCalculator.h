#pragma once
#include <string>
using namespace std;

class ArraySizeException
{
protected:
    char m_message[100];
public:
    ArraySizeException(const char* message);
    const char* GetMessage() const;
};

class ArrayDataException
{
protected:
    char m_message[100];
public:
    ArrayDataException(int row, int col);
    const char* GetMessage() const;
};

class ArrayValueCalculator 
{
public:
    int doCalc(const string arr[4][4]);  
};

