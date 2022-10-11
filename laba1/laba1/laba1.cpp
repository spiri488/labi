

#include <iostream>
#include <locale>
#include <cmath>
#include <iomanip>
#define G 10
#define P 3.14159

using namespace std;

float dlina(float V, float ugol)

{ 
    while (ugol > 180) {
        cout << "Введите корректное значение угла: "; cin >> ugol;
    }
    return (pow(V, 2) * 2 * abs(sin(ugol * P / 180)) * abs(cos(ugol * P / 180))) / G;

 
}


void main()
{
    setlocale(LC_ALL, "RUS");

    float V, ugol;

    cout << "Укажите начальную скорость: "; cin >> V;
    cout << "Укажите угол к горизонту: "; cin >> ugol;
    cout << "Дальность полета тела с начальной скоростью: " << V << " и углом к горизонту: " << ugol << " составит: " 
        << fixed << setprecision(3) << dlina(V, ugol);

    printf("\nУкажите начальную скорость: "); scanf_s("%f", &V);
    printf("\nУкажите угол к горизонту : "); scanf_s("%f", &ugol);
    printf("\nДальность полета тела с начальной скоростью: %f и углом к горизонту: %f  составит: %10.3f", V, ugol, dlina(V, ugol));
    
  
}


