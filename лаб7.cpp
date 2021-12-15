#include <iostream>
#include <math.h>

using namespace std;

void two(){
    cout << "Задание 2: Определить значения угла в градусах" << endl;
    int g, r;
	cout << "Введите значение угла в радианах" << endl;
	cin >> r;
	if ((r < 0) or (r > 6.283185)) {
		cout << "Значение радиана не соответствует промежутку  0 < r < 2Pi" << endl;
	}
	else {
		g = (r * 180) / 3.14;
		cout << "Значение угла в градусах  = " << endl << g;
	}

}

void three(){
    cout << "Задание 3: Определить, сколько стоит 1 кг и Y кг конфет" << endl;
    int X, A, Y, B, k1;
	cout << "Введите количество и потраченную сумму через пробел" << endl;
	cin >> X >> A;
	if ((A < 0) or (X<0)){
		cout << "Сумма не может быть отрицательной" << endl;
	}
	else{
		k1 = A / X;
		cout << "Введите вес в кг" << endl;
		cin >> Y;
		B = k1 * Y;
		cout << "Цена за кг: " << k1 << endl << "за все: " << B;
	}

}


void four(){
    cout << "Задание 4: Определить расстояние между автомобилями через T часов, если автомобили удаляются друг от друга" << endl << endl;
    int V1, V2, S, t, S2;
	cout << "Введите скорости автомобилей V1 и V2 и расстояние между ними через пробел" << endl;
	cin >> V1 >> V2 >> S;
	cout << "Введите время в часах" << endl;
	cin >> t;
	if ((V1 < 0) or (V2 < 0) or (S < 0)){
		cout << "СКорость или время не может быть отрицательного значения" << endl;
	}
	else{
		S2 = S + V1 * t + V2 * t;
		cout << "Ответ:" << S2;
	}



}



void five(){
    cout << "Задание 5: Решить линейное уравнение A·x + B = 0, заданное своими коэффициентами A и B (коэффициент A не равен 0)" << endl << endl;
    int A, x, B;
	cout << "Введите значения A и B, при условии что A  не равно нулю" << endl;
	cin >> A >> B;
	if (A == 0){
		cout << "A не может быть равно  нулю" << endl;
	}
	else{
		x = -B / A;
		cout << "Ответ:  x = " << x;
	}
}


void six(){
    cout << "Задание 6: Найти решение системы линейных уравнений вида A1·x + B1·y = C1, A2·x + B2·y = C2" << endl << endl;
	int A1, B1, C1, A2, B2, C2, x, y, T, t1, t2;
	cout << "Введите значения A1 B1 C1 A2 B2 C2" << endl;
	cin >> A1 >> B1 >> C1 >> A2 >> B2 >> C2;
	T = A1 * B2 - A2 * B1;
	t1 = C1 * B2 - C2 * B1;
	t2 = A1 * C2 - A2 * C1;
	x = t1 / T;
	y = t2 / T;
	cout << "x = " << x << endl << "y = " << y;
}



int main() {
	int g, r;
	cout << "Введите значения угла в градусах в промежутке от 0 до 180 градусов"<< endl;
	cin >> g;
	if ((g < 0) or (g > 180)) {
		cout << "Промежуток не соблюден" << endl;
	}
	else {
		r = (g*3.14)/180;
		cout << "Значение в радианах: "<< endl << r;
	}
    
	two();
	three();
	four();
	five();
	six();



	return 0;
}