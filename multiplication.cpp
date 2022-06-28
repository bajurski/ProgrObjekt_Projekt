//
// Created by Arkadiusz Bajura on 22/06/2022.
//

#include "multiplication.h"
//Each operation in this program is defined as an object. Constructor expects two operands and initiates the only variable resullt (res)
//performing the operation. Function carrying the name of the operation, returns the result.
multiplication::multiplication(float m1, float m2) {
    res = m1 * m2;
}
float multiplication::resullt() {
    return res;
}
