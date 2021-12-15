#include <iostream>
#include <math.h>

using namespace std;
void two(){
int K, m, N;
	cout << " Введите целое число K в диапазоне от 1 до 365" << endl;
	cin >> K;
	
	if ((0 < K) and (K < 366)){
		cout << endl;
		m = K % 7;
		cout << " номер дня недели: " << m << endl;
	}
	else
	{
		cout << " Вы не выполнили условие " << endl;
	}
}

void three(){

	int K, m, N;
	cout << " Введите целое число K в диапазоне от 1 до 365" << endl;
	cin >> K;
	cout << " Введите целое число N в диапазоне от 1 до 7 " << endl;
	cin >> N;
	if ((0 < K) and (K < 366) and (0 < N) and (N < 8)){
		cout << endl;
		N = N - 2;
		m = ((K + N) % 7) + 1;
		cout << " номер дня недели: " << m << endl;
	}
	else{
		cout << " Вы не выполнили условие "<< endl;
	}
}

void four(){
int A, B, C, S1, S2, k, d, r1, r2;
	cout << " Введите значения: A, B, C " << endl;
	cin >> A >> B >> C;
	if ((A > 0) and (B > 0) and (C > 0)){
		r1 = A/C;
		r2 = B/C;
		S1 = r1 * r2;
		S2 = A * B - C*C*S1;
		cout << " Количество квадратов = " << S1 << endl << "незанятая область прямоугольника = " << S2 << endl;
	}
	else{
		cout << "Неверно введенные данные"<< endl;
}

void five(){
int a, b;
	cout << " Введите целое число " << endl;
	cin >> a;
	if (a >= 0){
		b = (a / 100) + 1;
		cout << b;
	}
	else{
		cout << "Условие не выполнено " << endl;
}

int main(){
	int s1, s2;
		cout << " введите количество секунд " << endl;
		cin >> s1;
		s2 = s1 % 60;
		cout << " количество секунд = " << s2 << endl;
two();
three();
four();
five();
return 0;
}