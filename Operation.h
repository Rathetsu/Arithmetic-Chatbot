#ifndef OPERATIONN
#define OPERATIONN

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <math.h>

using namespace std;

class Operation
{
private:
public:
    double ans;
    Operation(double x, double y);
    virtual double calc(double x, double y) = 0;
    ~Operation();
};

class _Add : Operation
{
public:
    _Add();
    double calc(double x, double y)
    {
        ans = x + y;
        return ans;
    }
    ~_Add();
};

class _Subtract : Operation
{
public:
    _Subtract();
    double calc(double x, double y)
    {
        ans = x - y;
        return ans;
    }
    ~_Subtract();
};

class _Difference : Operation
{
public:
    _Difference();
    double calc(double x, double y)
    {
        ans = abs(x - y);
        return ans;
    }
    ~_Difference();
};

class _Multiply : Operation
{
public:
    _Multiply();
    double calc(double x, double y)
    {
        ans = x * y;
        return ans;
    }
    ~_Multiply();
};

class _Divide : Operation
{
public:
    _Divide();
    double calc(double x, double y)
    {
        ans = x / y;
        return ans;
    }
    ~_Divide();
};

class _Power : Operation
{
public:
    _Power();
    double calc(double x, double y)
    {
        ans = pow(x, y);
        return ans;
    }
    ~_Power();
};

#include "Operation.cpp"
#include "Parser.cpp"
#endif