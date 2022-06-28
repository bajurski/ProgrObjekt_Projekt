//
// Created by arek on 23.06.22.
//

#include "calculator.h"

using namespace std;

void govenor(float op1, float op2, int operation) {
    float resul;
    switch (operation) {
        case 1 :
            add(op1, op2);
            break;
        case 2 :
            sub(op1, op2);
            break;
        case 3 :
            multi(op1, op2);
            break;
        case 4 :
            divi(op1, op2);
            break;
    }

}
void add(float a1, float a2) {
    addiction *a = new addiction(a1,a2);
    float resul = a->resullt();
    printResults(a1, a2, resul, '+');
    delete a;
}

void sub(float s1, float s2) {
    substraction *s = new substraction(s1,s2);
    float resul = s->resullt();
    printResults(s1, s2, resul, '-');
    delete s;
}

void multi(float m1, float m2) {
    multiplication *m= new multiplication(m1,m2);
    float resul = m->resullt();
    printResults(m1, m2, resul, '*');
    delete m;
}

void divi(float d1, float d2) {
    if(d2!=0){
        division *d = new division(d1,d2);
        float resul = d->resullt();
        printResults(d1, d2, resul, '/');
        delete d;
    } else dataCollector(4);

}

void printResults(float comp1, float comp2, float res, char symbol) {
    char yesNo;
    cout<<"RESULT : \n";
    cout<<comp1<<" "<<symbol<<" "<<comp2<<" = "<<res;
    cout<<"\nDo you want to continue ? [y/n] \n";
    cin>>yesNo;
    if(yesNo=='y' || yesNo=='Y')
    {
        mainMenu();
    } else {
        cin.clear();
        cout<<"End of the program. \n\n";
        exit(0);
    }
}


