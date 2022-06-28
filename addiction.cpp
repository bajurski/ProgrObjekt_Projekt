//
// Created by Arkadiusz Bajura on 22/06/2022.
//

#include "addiction.h"
//Each operation in this program is defined as an object. Constructor expects two operands and initiates the only variable resullt (res)
//performing the operation. Function carrying the name of the operation, returns the result.
addiction::addiction(float a1, float a2) {
    res = a1 + a2;
}
float addiction::resullt() const {
    return res;
}
