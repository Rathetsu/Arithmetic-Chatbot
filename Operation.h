#ifndef OPERATIONN
#define OPERATIONN

#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

class Operation
{
private:

public:
    Operation(int x, int y);
    /*int Operation::_Add(int x, int y);
    int Operation::_Subtract(int x, int y);
    int Operation::_Multiply(int x, int y);
    int Operation::_Divide(int x, int y);*/

    virtual int calculate(int x, int y) = 0;

    ~Operation();
};

class _Add : Operation 
{
    int calculate(int x, int y)
    {
        int ans = x + y;
        return ans;
    }
};

class _Subtract : Operation 
{
    int calculate(int x, int y)
    {
        int ans = x - y;
        return ans;
    }
};

class _Difference : Operation 
{
    int calculate(int x, int y)
    {
        int ans = abs( x - y );
        return ans;
    }
};

class _Multiply : Operation 
{
    int calculate(int x, int y)
    {
        int ans = x * y;
        return ans;
    }
};

class _Divide : Operation 
{
    int calculate(int x, int y)
    {
        int ans = x / y;
        return ans;
    }
};

#include "Operation.cpp"
#endif