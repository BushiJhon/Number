#include <iostream>
#include "Number.h"
using namespace std;

int main(){
    RealNumber obj_1=10.05;
    RealNumber obj_2=2;
    obj_1.add(obj_2);
    obj_1.print();
    obj_1.mul(obj_2);
    obj_1.print();
    IntegerNumber obj_3=3;
    IntegerNumber obj_4=4;
    obj_3.add(obj_4);
    obj_3.print();
    obj_3.mul(obj_4);
    obj_3.print();
    ComplexNumber obj_5(1,2);
    ComplexNumber obj_6(1,-2);
    obj_5.add(obj_6);
    obj_5.print();
    obj_5.mul(obj_6);
    obj_5.print();
    return 0;
}
