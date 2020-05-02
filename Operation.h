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
protected:
    double x, y;

public:
    double ans;
    Operation(double _x, double _y)
    {
        x = _x;
        y = _y;
    }
    virtual double calc() = 0;
    ~Operation(){};
};

class _Add : public Operation
{
public:
    _Add(double _x, double _y) : Operation(_x, _y){};
    double calc()
    {
        return x + y;
    }
    ~_Add(){};
};

class _Subtract : public Operation
{
public:
    _Subtract(double _x, double _y) : Operation(_x, _y){};
    double calc()
    {
        return x - y;
    }
    ~_Subtract(){};
};

class _Difference : public Operation
{
public:
    _Difference(double _x, double _y) : Operation(_x, _y){};
    double calc()
    {
        return abs(x - y);
    }
    ~_Difference(){};
};

class _Multiply : public Operation
{
public:
    _Multiply(double _x, double _y) : Operation(_x, _y){};
    double calc()
    {
        return x * y;
    }
    ~_Multiply(){};
};

class _Divide : public Operation
{
public:
    _Divide(double _x, double _y) : Operation(_x, _y){};
    double calc()
    {
        return x / y;
    }
    ~_Divide(){};
};

class _Power : public Operation
{
public:
    _Power(double _x, double _y) : Operation(_x, _y){};
    double calc()
    {
        return pow(x, y);
    }
    ~_Power(){};
};

#include "Operation.cpp"
#endif