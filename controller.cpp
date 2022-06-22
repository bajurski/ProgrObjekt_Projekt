//
// Created by Arkadiusz Bajura on 22/06/2022.
//

#include "controller.h"
#include "operations.h"

using namespace std;
void mainMenu()
{
    int menuItem{};
    string strMenuIt{};
    cout<<"----- KALKULATOR ARYTMETYCZNY--------\n"
          "=====================================\n";
    cout<<"Proszę wybrać działanie i podać jego składniki:\n\n"
          "[1] - Dodawanie\n"
          "[2] - Odejmowanie\n"
          "[3] - Mnożenie\n"
          "[4] - Dzielenie\n"
          "[5] - Koniec programu\n\n";
    cout<<"Twój wybór : ";
    cin>>menuItem;
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
            cout << "\n Twój wybór to :" << "Dodawanie\n";
                dataCollector(menItem);
            }
            break;
        case 2 :
            {
            cout<<"\n Twój wybór to :"<<"Odejmowanie\n";
                dataCollector(menItem);
            }
            break;
        case 3 :
            {
            cout<<"\n Twój wybór to :"<<"Mnożenie\n";
                dataCollector(menItem);
            }
            break;
        case 4 :
            {
            cout<<"\n Twój wybór to :"<<"Dzielenie\n";
                dataCollector(menItem);
            }
            break;
        case 5 :
            {
            cout<<"\n Twój wybór to :"<<"koniec programu\n";
                dataCollector(menItem);
            }
            break;
        default :
            {
            cout<<"\n Nie ma takiego elementu.\n"
                  "Czy chcesz kontynuować ? [y/n]\n";
            cin>>yesNo;
            if(yesNo == 'y'||yesNo == 'Y') {
                mainMenu();
            } else exit;
            }
    }
}
/* addiction *a = new addiction(20.31,70.001);
   a->resullt();
   division *d = new division(6,900000);
   d->resullt();
   multiplication *m = new multiplication(23, 567.01);
   m->resullt();
   substraction *s = new substraction(45,56);
   s->resullt();
   delete a;
   delete d;
   delete m;
   delete s;*/