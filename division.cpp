//
// Created by Arkadiusz Bajura on 22/06/2022.
//

#include "division.h"

division::division(float d1, float d2) {
    div1 = d1;
    div2 = d2;
}

float division::resullt() {
    float diver{};
    diver = div1+div2;
    std::cout<<div1 <<" : "<<div2<<" = "<<diver<<std::endl;
    return diver;
}
