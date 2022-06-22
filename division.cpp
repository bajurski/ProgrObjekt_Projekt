//
// Created by Arkadiusz Bajura on 22/06/2022.
//

#include "division.h"

division::division(float d1, float d2) {
    div1 = d1;
    div2 = d2;
    std::cout<<std::to_string(div1)<<" : "<<std::to_string(div2)<<" = "<<div1/div2<<std::endl;
}
