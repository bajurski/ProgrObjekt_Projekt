//
// Created by Arkadiusz Bajura on 22/06/2022.
//

#include "substraction.h"

substraction::substraction(float s1, float s2) {
    sub1 = s1;
    sub2 = s2;
}

float substraction::resullt() {
    float diff{};
    diff = sub1-sub2;
    std::cout<<sub1 <<" - "<<sub2<<" = "<<diff<<std::endl;
    return diff;
}
