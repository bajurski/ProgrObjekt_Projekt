//
// Created by arek on 23.06.22.
//

#ifndef PROGROBJEKT_PROJEKT_CALCULATOR_H
#define PROGROBJEKT_PROJEKT_CALCULATOR_H

#include "operations.h"
#include "dataCollect.h"

operationsData govenor(int switcher);
float addiction(operationsData dataForCalc);
float substraction(operationsData dataForCalc);
float multiplication(operationsData dataForCalc);
float division(operationsData dataForCalc);

#endif //PROGROBJEKT_PROJEKT_CALCULATOR_H
