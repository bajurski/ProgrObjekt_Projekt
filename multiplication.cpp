//
// Created by Arkadiusz Bajura on 22/06/2022.
//

#include "multiplication.h"

multiplication::multiplication(float m1, float m2) {
    mult1 = m1;
    mult2 = m2;
}

float multiplication::resullt() {
    float multi{};
    multi = mult1*mult2;
    std::cout<<mult1 <<" * "<<mult2<<" = "<<multi<<std::endl;
    return multi;
}
