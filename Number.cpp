#include "Number.h"
#include <iostream>

using namespace std;
RealNumber::RealNumber(double x){
    number=x;
}

RealNumber RealNumber::add(const RealNumber& other){
    number+=other.number; 
    return *this;
}

RealNumber RealNumber::mul(const RealNumber& other){
     number*=other.number;
     return *this;
}

void Number::print(){
    cout<<number<<endl;
}

IntegerNumber::IntegerNumber(int x):RealNumber(x){
    integernumber=x;
}

IntegerNumber IntegerNumber::add(const IntegerNumber& other){
     integernumber+=other.integernumber;
     return *this;
}

IntegerNumber IntegerNumber::mul(const IntegerNumber& other){
    integernumber*=other.integernumber;
    return *this;
}

void IntegerNumber::print(){
    cout<<integernumber<<endl;
}

ComplexNumber::ComplexNumber(double x, double y){
    first=x,last=y;
}

ComplexNumber ComplexNumber::add(const ComplexNumber& other){
    first+=other.first;
    last+=other.last;
    return *this;
}

ComplexNumber ComplexNumber::mul(const ComplexNumber& other){
    first=first*other.first+last*other.last;
    last=first*other.last+last*other.first;
    return *this;
}

void ComplexNumber::print(){
    cout<<first<<" "<<last<<endl;
}
