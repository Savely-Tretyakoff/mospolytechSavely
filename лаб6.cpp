#include <iostream>
#include <math.h>

using namespace std;

void two(){
		int A, B, C;
	cout << "Задание №2: Поменять значения А, В и С    Введите значения А B и C" << endl;
	cin >> A >> B >> C;
	swap (A , B);
	swap (C , A);
	cout << "Ответ: A = " << A << endl << "B = " << B << endl << "C = " << C;
}



void three(){
	int A, B, C;
	cout << "Задание №3: Поменять значения А, В и С    Введите A, B, C" << endl;
	cin >> A >> B >> C;
	swap(A , C);
	swap(B , A);
	cout << "Ответ: A = " << A << endl << "B = " << B << endl << "C = " << C;
}




void four(){
	int x, y;
	cout << "Задание №4: Найти значение функции при данном Х      Введите x" << endl;
	cin >> x;
	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	cout << "Ответ: y = " << y;
}

void five(){
	int x, y;
	cout << "Задание №5: Найти значение функции при данном Х     Введите значение x" << endl;
	cin >> x;
	y = 4 * pow((x-3), 6) - 7 * pow((x-3), 3) + 2;
	cout << "y = " << y;
}

void six(){
	int X, n;
	cout << "Задание 6: Вычислить А^8     Введите значение X" << endl;
	cin >> X;
	n = pow(X ,2)*pow(X,2)*pow(X,2)*pow(X,2)
	cout << "Ответ: " << n;
}
void seven(){
	int X, n, k;
	cout << "Задание 7: Вычислить А^15    Введите X" << endl;
	cin >> X;
	n = pow(X, 3) * pow(X, 3) * pow(X, 3);
	k = n * pow(X, 3) * pow(X, 3);
	cout << "Ответ: " << k;
}

int main()
{
	int A, B;
	cout << "Введите значения A и B" << endl;
	cin >> A >> B;
	swap(A, B);
	cout<< "Ответ: A = " << A << endl << "B = " << B;
	



	two();
	three();
	four();
	five();
	six();
	seven();
	return 0;
}
