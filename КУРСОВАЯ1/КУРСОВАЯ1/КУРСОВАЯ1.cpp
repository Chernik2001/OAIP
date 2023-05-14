#include <iostream>
#include <cmath>

using namespace std;


double solve_equation(double x, int equation_num) {

    if (equation_num == 1) {
        return exp(-x); // Решаем уравнение x = e^(-x)
    }
    else if (equation_num == 2) {
        return pow(1 + x, 1.0 / 3.0); // Решаем уравнение x = (1 + x)^(1/3)
    }
    else if (equation_num == 3) {
        return cos(x); // Решаем уравнение x = cos(x)
    }
    
}

int main() {
    setlocale(LC_ALL, "Russian");
    const double EPSILON = 1e-6; 
    double x0; 
    double x1; 
    int equation_num; 
    
    // Пример 1:
    equation_num = 1;
    x0 = 0.0;
    x1 = solve_equation(x0, equation_num);
    int iteration1 = 1;
    int iteration2 = 1;
    int iteration3 = 1;
    while (abs(x1 - x0) > EPSILON) {
        x0 = x1;
        x1 = solve_equation(x0, equation_num);
        iteration1++;
    }

    cout << "Решение 1: " << x1 << endl;
    cout << "Количество итераций: " << iteration1 << endl;

    // Пример 2:
    equation_num = 2;
    x0 = 0.0;
    double x2 = solve_equation(x0, equation_num);
    iteration2 = 1;

    while (abs(x2 - x0) > EPSILON) {
        x0 = x2;
        x2 = solve_equation(x0, equation_num);
        iteration2++;
    }

    cout << "Решение 2: " << x2 << endl;
    cout << "Количество итераций: " << iteration2 << endl;

    // Пример 3:
    equation_num = 3;
    x0 = 0.0;
    double x3 = solve_equation(x0, equation_num);
    iteration3 = 1;

    while (abs(x3 - x0) > EPSILON) {
        x0 = x3;
        x3 = solve_equation(x0, equation_num);
        iteration3++;
    }

    cout << "Решение 3: " << x3 << endl;
    cout << "Количество итераций: " << iteration3 << endl;
    cout << "Итог:1)Первое уравнение выдало ответ:" << x1 << endl << "      Было проведено итераций: " << iteration1 << endl << "     2)Второе уравнение выдало ответ : " << x2 << endl << "      Было проведено итераций : " << iteration2 << endl << "     3)Третье уравнение выдало ответ: " << x3 << endl << "      Было проведено итераций: " << iteration3 << endl;
    
    
    return 0;
}