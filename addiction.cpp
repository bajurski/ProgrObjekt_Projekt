//
// Created by Arkadiusz Bajura on 22/06/2022.
//

#include "addiction.h"

addiction::addiction(float a1, float a2) {
    add1 = a1;
    add2 = a2;
}

float addiction::resullt() {
    float sum{};
    sum = add1 + add2;
    std::cout << add1 << " + " << add2 << " = " << sum << std::endl;
    return sum;
}
