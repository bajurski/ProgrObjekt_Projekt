//
// Created by Arkadiusz Bajura on 22/06/2022.
//

#include "substraction.h"
//Each operation in this program is defined as an object. Constructor expects two operands and initiates the only variable resullt (res)
//performing the operation. Function carrying the name of the operation, returns the result.
substraction::substraction(float s1, float s2) {
    res = s1 - s2;
}
float substraction::resullt() {
    return res;
}
