/*************************
*  Автор: Фенько А.Н.    *
*  Дата 17.09.2024       *
*  Название: Вариант №11 *
* ***********************/


#include <iostream>
#include <math.h>

using namespace std;

int main() {
    const double pi = 3.14159265358979323846;
    
    double a = 5.96;
    double H = 850; 
    
    double t = 10;
    
    double T = pi*sqrt(H/(2*a));
    double h = H/2*(1-cos((sqrt((2*a)/H))*t));
    double v = sqrt(a*H/2);
    
    cout << "Продолжительность:" << T << endl;
    cout << "Глубина:" << h << endl;
    cout << "Скорость:" << v << endl;
}