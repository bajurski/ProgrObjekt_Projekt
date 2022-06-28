//
// Created by arek on 23.06.22.
//

#ifndef PROGROBJEKT_PROJEKT_CALCULATOR_H
#define PROGROBJEKT_PROJEKT_CALCULATOR_H

#include "operations.h"
//This file defines a govenor function which calls apropriate calculation function according to chosen operation.
//Calculation functions, create operation objects, operation is done, result is passed to the print function, and the object
//itself is being destroyed.
void govenor(float op1, float op2, int operation);
void add(float a1, float a2);
void sub(float s1, float s2);
void multi(float m1, float m2);
void divi(float d1, float d2);
void printResults(float comp1, float comp2, float res, char symbol);

#endif //PROGROBJEKT_PROJEKT_CALCULATOR_H
