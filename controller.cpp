//
// Created by Arkadiusz Bajura on 22/06/2022.
//

#include "controller.h"


using namespace std;
void mainMenu()
{
    int menuItem{};
    string strMenuIt{};
    cout<<"----- ARITHMETIC CALCULATOR--------\n"
          "=====================================\n";
    cout<<"Choose operation, and insert it's components::\n\n"
          "[1] - Addiction\n"
          "[2] - Subtraction\n"
          "[3] - Multiplication\n"
          "[4] - Division\n"
          "[5] - Exit program\n\n";
    cout<<"Your choice : ";
    cin>> menuItem;
   if(!cin) {
       cin.clear(); // reset failbit
       cin.ignore(numeric_limits<streamsize>::max(), '\n');//skip bad input, next request user reinput
   }
    choice(menuItem);
}
void choice(int menItem) {
    char yesNo{};
    switch (menItem) {
        case 1 :
            {
            cout << "\n You have chosen :" << "Addiction\n";
                dataCollector(menItem);
            }
            break;
        case 2 :
            {
            cout<<"\n  You have chosen :"<<"Subtraction\n";
                dataCollector(menItem);
            }
            break;
        case 3 :
            {
            cout<<"\n You have chosen :"<<"Multiplication\n";
                dataCollector(menItem);
            }
            break;
        case 4 :
            {
            cout<<"\n You have chosen  :"<<"Division\n";
                dataCollector(menItem);
            }
            break;
        case 5 :
            {
            cout<<"\n You have chosen :"<<"Exit program\n";
                //dataCollector(menItem);
                exit(0);
            }
        default :
            {
            cout<<"\n There is no such element..\n"
                  "Do You want to continue ? [y/n]\n";
            cin>>yesNo;
            if(yesNo == 'y'||yesNo == 'Y') {
                cin.clear();
                mainMenu();
            } else exit(0);
            }
    }
}
