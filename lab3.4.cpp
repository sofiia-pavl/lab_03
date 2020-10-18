// Lab_03_4.cpp 
// < прізвище, ім’я автора > 
// Лабораторна робота № 3.4 
// Розгалуження, задане плоскою фігурою. 
// Варіант 0.1 

#include <iostream> 

using namespace std;

int main() 
{
    double x;  // вхідний аргумент     
    double y;  // вхідний параметр 
    double R;  // вхідний аргумент

    cout << "x = "; cin >> x;     
    cout << "y = "; cin >> y;
    cout << "R = "; cin >> R;
    
    // розгалуження в повній формі
    if (((x >= -2 * R && x <= 0) && (y <= 0 && y >= -(x + 2 * R))) ||
        (x >= 0 && x <= 2 * R) && (y >= 0 && y <= 2 * R) && !(x * x + y * y >= R * R))
    cout << "yes" << endl;
    else
        cout << "no" << endl;

    cin.get();     
    return 0;
}