//
// Created by arek on 23.06.22.
//

#ifndef PROGROBJEKT_PROJEKT_DATACOLLECT_H
#define PROGROBJEKT_PROJEKT_DATACOLLECT_H

#include "operations.h"
#include "controller.h"

struct operationsData {
    float component1;
    float component2;
    int operation;
};
operationsData dataCollector(int ops);

#endif //PROGROBJEKT_PROJEKT_DATACOLLECT_H
