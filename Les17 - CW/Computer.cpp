#include "Computer.h"

Computer::Computer(string name_, float frequency_, int OZU_, bool DVD_, float cost_)
{
    name = name_;
    frequency = frequency_;
    OZU = OZU_;
    DVD = DVD_;
    cost = cost_;
}

int Computer::getOZU() const
{
    return OZU;
}

void Computer::show() const
{
    cout << "Name: " << name << endl;
    cout << "Frequency: " << frequency << "GHz" << endl;
    cout << "OZU: " << OZU << endl;
    cout << "DVD: " << DVD << endl;
    cout << "Cost: " << cost << "UAH" << endl;
}
