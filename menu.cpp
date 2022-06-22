//
// Created by Arkadiusz Bajura on 22/06/2022.
//

#include "menu.h"
#include "operations.h"

using namespace std;
void mainMenu()
{
    //cout<<fixed;
    //cout<<setprecision(3);
    addiction *a = new addiction(2.3,7.00001);
    division *d = new division(6,9000000);
    multiplication *m = new multiplication(23, 567);
    substraction *s = new substraction(45,56);
    delete a;
    delete d;
    delete m;
    delete s;
}