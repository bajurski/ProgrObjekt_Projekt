//
// Created by Arkadiusz Bajura on 22/06/2022.
//

#include "division.h"
//Each operation in this program is defined as an object. Constructor expects two operands and initiates the only variable resullt (res)
//performing the operation. Function carrying the name of the operation, returns the result.
division::division(float d1, float d2) {
   res = d1 / d2;
}
float division::resullt() {
    return res;
}
