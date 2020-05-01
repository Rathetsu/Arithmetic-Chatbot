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
    Operation(int x, int y);
    virtual double calculate(double x, double y) = 0;
    ~Operation();
};

class _Add : Operation
{
    double calculate(double x, double y)
    {
        double ans = x + y;
        return ans;
    }
};

class _Subtract : Operation
{
    double calculate(double x, double y)
    {
        double ans = x - y;
        return ans;
    }
};

class _Difference : Operation
{
    double calculate(double x, double y)
    {
        double ans = abs(x - y);
        return ans;
    }
};

class _Multiply : Operation
{
    double calculate(double x, double y)
    {
        double ans = x * y;
        return ans;
    }
};

class _Divide : Operation
{
    double calculate(double x, double y)
    {
        double ans = x / y;
        return ans;
    }
};

class _Power : Operation
{
    double calculate(double x, double y)
    {
        double pow(double x, double y); 
        return ans;
    }
};

#include "Operation.cpp"
#endif