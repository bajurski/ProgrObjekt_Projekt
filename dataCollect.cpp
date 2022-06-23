//
// Created by arek on 23.06.22.
//

#include "dataCollect.h"

using namespace  std;

void dataCollector(int ops) {
    int wait;
    float comp1{};
    float comp2{};
    cout<<"Podaj pierwszy składnik działania: \n";
    cin >> comp1;
    if(!cin)
    {
        cin.clear(); // reset failbit
        cin.ignore(numeric_limits<streamsize>::max(), '\n');//skip bad input, next request user reinput
        cout<<"Bad input !\n";
        choice(ops);
    }
    cout<<"Podaj drugi składnik działania: \n";
    if(ops == 4) cout<<"Wybrałeś dzielenie, awięc to nie może być zero !\n";
    cin >> comp2;
    if(ops==4 && comp2==0)
    {
        cout<<"Dzielnik nie może być zerem !\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');//skip bad input, next request user reinput
        cin.get();
        mainMenu();
    }
    if(!cin)
    {
        cin.clear(); // reset failbit
        cin.ignore(numeric_limits<streamsize>::max(), '\n');//skip bad input, next request user reinput
        cout<<"Bad input !\n";
        choice(ops);
    }
   govenor(comp1,comp2,ops);
}


