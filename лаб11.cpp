#include <iostream>

using namespace std;
// 2. Даны три числа. Найти сумму двух наибольших из них
void two() {
  double a, b, c;
  cout << "Введите три числа A, B и C" << endl;
  cin >> a >> b >> c;
  if ((b <= c) and(b <= a)) {
    cout << " Сумма двух наибольших: " << a + c;
  } else {
    if ((a <= c) and(a <= b)) {
      cout << " Сумма двух наибольших: " << b + c;
    } else {
      cout << " Сумма двух наибольших: " << b + a;
    }
  }
}
// 3. На плоскости расположены три точки: A, B, C. 
// Определить, какая из двух последних точек (B или C) расположена ближе к A,
//  и вывести эту точку и ее расстояние от точки A.
void three() {
  double a, b, c, x1, y1, x2, y2, x3, y3, B, C, AB, AC;
  cout << "введите две координаты точки А, по x и y";
  cin >> x1 >> y1;
  cout << "введите две координаты точки B, по x и y ";
  cin >> x2 >> y2;
  cout << "введите две координаты точки C, по x и y ";
  cin >> x3 >> y3;
  AB = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
  AC = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
  if (AB < AC) {
    cout << "точка = " << "B" << endl;
    cout << "length = " << AB;
  } else if (AC < AB) {
    cout << "Точка = " << "C" << endl;
    cout << "Длинна = " << AC;
  } else if (AC == AB) {
    cout << "Расстояния от точки А до других точек одинаковы, а длина = " << AB;
  }
}
// 4.Даны координаты точки, не лежащей на координатных осях OX и OY.
//  Определить номер координатной четверти, в которой находится данная точка
void four() {
      int x, y;
      cout << "Введите координаты точек, не лежащих на координатных осях OX и OY" << endl;
      cin >> x >> y;

      if ((x > 0) and(y > 0)) {
        cout << "Первая четверть";
      } else if ((x < 0) and(y > 0)) {
        cout << "Вторая четверть";
      } else if ((x < 0) and(y < 0)) {
        cout << "Третья четверть";
      } else if ((x > 0) and(y < 0)) {
        cout << "Четвертая четвероть";
      } else
        cout << "Точки не должны лежать на осях OX и OY, несоответствие условию!";
    }
    // 5. Дано целое число. Вывести его строку-описание вида «отрицательное четное число», 
    // «нулевое число», «положительное нечетное число» и т. д.
    void five() {
      int R;
      cout << "Введите целое число" << endl;
      cin >> R;
      if ((R > 0) and(R % 2) == 0) {
        cout << "Четное положительное";
      } else if ((R > 0) and(R % 2) != 0) {
        cout << "Нечетное положительное";
      } else if (R == 0) {
        cout << "нолик";
      } else if ((R < 0) and(R % 2) == 0) {
        cout << "Четное отрицательное";
      } else if ((R < 0) and(R % 2) != 0) {
        cout << "Нечетное отрицательное";
      }
    }
    // 6. Дано целое число, лежащее в диапазоне 1–999. 
    // Вывести его строкуописание вида «четное двузначное число», 
    // «нечетное трехзначное число» и т. д.
    void six() {

      int a;

      cout << "Введите целое число в диапозоне от 1 до 999" << endl;
      cin >> a;

      if (a % 2 == 0);
      else cout << "не";
      cout << "четное ";
      if (a / 100 > 0 and a / 100 < 10) cout << "трехзначное число";
      else if (a / 10 > 0 and a / 10 < 10) cout << "двузначное число";
      else if (a / 10 == 0) cout << "однозначное число";
      
    }

    // 1.Даны две переменные целого типа: A и B.
    //  Если их значения не равны, то присвоить каждой переменной большее из этих значений,
    //  а если равны, то присвоить переменным нулевые значения.
    //  Вывести новые значения переменных A и B.
    int main() {
      int a, b;
      cout << "введите первую целочисленную переменную" << endl;
      cin >> a;
      cout << "введите вторую целочисленную переменную" << endl;
      cin >> b;

      if (a != b) {
        a = a + b;
        b = a;
        cout << " первая переманная " << a << endl << " вторая переменная " << b;
      } else {
        a = b = 0;
        cout << " первая переманная " << a << endl << " вторая переменная " << b;
      }



    two();
    three();
    four();
    five();
    six();

    
	return 0;
    }