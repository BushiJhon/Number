#ifndef NUMBER_H
#define NUMBER_H
#include <iostream>

using namespace std;
class Number{
   public:
    virtual void print();
    Number add(const Number& other);
    Number mul(const Number& other);
    double number;
};

class RealNumber: public Number{
    public:
     RealNumber(double x);
     RealNumber add(const RealNumber& other);
     RealNumber mul(const RealNumber& other);
};

class IntegerNumber: public RealNumber{
    public:
     IntegerNumber(int x);
     void print();
     IntegerNumber add(const IntegerNumber& other);
     IntegerNumber mul(const IntegerNumber& other);
     int integernumber;
};

class ComplexNumber: public Number{
    public:
    void print();
    ComplexNumber(double x, double y);
    ComplexNumber add(const ComplexNumber& other);
    ComplexNumber mul(const ComplexNumber& other);
    double first; double last;
};

#endif
