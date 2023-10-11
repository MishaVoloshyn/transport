#include "alltransport.h"
#include "auto.h"
#include "tralik.h"
#include "moped.h"
#include "plane.h"
#include "ship.h"
#include <iostream>
using namespace std;


int main()
{
    allTransport* ptr = nullptr;
    int choise;
    cout << "1 - Auto" << endl;
    cout << "2 - Plane" << endl;
    cout << "3 - Moped" << endl;
    cout << "4 - Ship" << endl;
    cout << "5 - Tralik" << endl;
    cin >> choise;

    switch (choise) {
    case 1:
        ptr = new Auto();
        break;
    case 2:
        ptr = new Plane();
        break;
    case 3:
        ptr = new Moped();
        break;
    case 4:
        ptr = new Ship();
        break;
    case 5:
        ptr = new Tralik();
        break;
    default:
        cout << "Error!!!" << endl;
    }

    ptr->Input();
    ptr->Print();
    delete ptr;
}