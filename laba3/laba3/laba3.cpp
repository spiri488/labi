#include <iostream>
#include <locale>
#include <math.h>

using namespace std;

int main()
{
    float x;
    setlocale(LC_ALL, "RUS");

    cout << "Введите значение аргумента функции:";
    cin >> x;

    double Sum = log(4), eps = 0.0001f;
    int n = 1;

    while (true)
    {
        double q = (1 / pow(4, n)) * (pow(x, n) / n);
        Sum -= q;
        n++;

        if (q < eps)
            break;
    }

    
        
    
    cout << "\nСумма ряда= " << Sum << " Значение ln(4 - x)=" << log(4 - x);
}