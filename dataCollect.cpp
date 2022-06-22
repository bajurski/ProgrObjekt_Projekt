//
// Created by arek on 23.06.22.
//

#include "dataCollect.h"

using namespace  std;

operationsData dataCollector(int ops) {
    float component1{};
    float component2{};
    cout<<"Podaj pierwszy składnik działania: \n";
    cin>>component1;
    if(!cin)
    {
        cin.clear(); // reset failbit
        cin.ignore(numeric_limits<streamsize>::max(), '\n');//skip bad input, next request user reinput
        cout<<"Bad input !\n";
        choice(ops);
    }
    cout<<"Podaj drugi składnik działania: \n";
    cin>>component2;
    if(!cin)
    {
        cin.clear(); // reset failbit
        cin.ignore(numeric_limits<streamsize>::max(), '\n');//skip bad input, next request user reinput
        cout<<"Bad input !\n";
        choice(ops);
    }


    return operationsData();
}
