//
// Created by arek on 23.06.22.
//

#include "dataCollect.h"

using namespace  std;

void dataCollector(int ops) { //<--- dataCollector(int ops) takes both components for calculation from user.
    float comp1{};
    float comp2{};
    cout<<"Enter first component of the operation: \n";
    cin >> comp1;
    if(!cin)
    {
        cin.clear(); // reset failbit
        cin.ignore(numeric_limits<streamsize>::max(), '\n');//<--- skip bad input, next request user re-input.
        cout<<"Bad input !\n";
        choice(ops);
    }
    cout<<"Enter second component of the operation: \n";
    if(ops == 4) cout<<"While it is a division, divisor CAN'T be ZERO !! \n";//<--- and it knows what to do, when cosen operation is a division.
    cin >> comp2;
    if(ops==4 && comp2==0)
    {
        cout<<"Divisor can't be equal to ZERO !\n";
        cin.clear(); // reset failbit
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout<<"Press any key to return to main menu\n";
        cin.get();
        mainMenu();
    }
    if(!cin)
    {
        cin.clear(); // reset failbit
        cin.ignore(numeric_limits<streamsize>::max(), '\n');//<--- skip bad input, next request user re-input
        cout<<"Bad input !\n";
        choice(ops);
    }
   govenor(comp1,comp2,ops); //<-- After collecting data, both components and operation number are passed
                                                // to the govenor(comp1,comp2,ops) declared in calculator.h
}


