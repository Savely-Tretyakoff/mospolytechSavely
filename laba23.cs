using System;

namespace ConsoleApp3
{
    class Program
    {
        static void first()
        {
            Console.WriteLine("Введите переменную X1");
            int x1 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Введите переменную Y1");
            int y1 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Введите переменную X2");
            int x2 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Введите переменную Y2");
            int y2 = Convert.ToInt32(Console.ReadLine());
            int X = x2 - x1;
            int Y = y2 - y1;
            int underCorX = Convert.ToInt32(Math.Pow(X, 2));
            int underCorY = Convert.ToInt32(Math.Pow(Y, 2));
            double d = Convert.ToDouble(Math.Sqrt(underCorX + underCorY));
            Console.WriteLine(d);
        }

        static void second()
        {
            Console.WriteLine("Введите значения точек A, B, C на числовой оси по порядку");
            int A = Convert.ToInt32(Console.ReadLine());
            int B = Convert.ToInt32(Console.ReadLine());
            int C = Convert.ToInt32(Console.ReadLine());
            int AC = C - A;
            int BC = C - B;
            int sum = AC + BC;
            if (A > C && A > B && B > C)
            {
                Console.WriteLine("Точки введены в неверном порядке");
            }
            else
            {
                Console.WriteLine($"Отрезок AC = {AC}, Отрезок BC = {BC}, Их сумма = {sum}");
            }


        }
        static void third()
        {
            Console.WriteLine("Введите значения точек A, C, B на числовой оси по порядку");
            int A = Convert.ToInt32(Console.ReadLine());
            int C = Convert.ToInt32(Console.ReadLine());
            int B = Convert.ToInt32(Console.ReadLine());
            int AC = C - A;
            int BC = B - C;
            int proiz = AC * BC;
            if (A < C && C < B)
            {
                Console.WriteLine($"Произведение длинн отрезков AC и BC = {proiz}");
            }
            else
            {
                Console.WriteLine("Точки введены в неверном порядке");
            }

        }
        static void fourth()
        {
            Console.WriteLine("Введите координаты противоположных вершин прямоугольника");
            Console.WriteLine("Введите переменную X1");
            int x1 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Введите переменную Y1");
            int y1 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Введите переменную X2");
            int x2 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Введите переменную Y2");
            int y2 = Convert.ToInt32(Console.ReadLine());
            int X = x2 - x1;
            int Y = y2 - y1;
            int P = 2 * (X + Y);
            int S = X * Y;
            Console.WriteLine($"Периметр прямоугольника равен = {P}, Площадь прямоугольника равна = {S}");


        }
        static void five()
        {
            Console.WriteLine("Введите координаты вершин треугольника");
            Console.WriteLine("Введите переменную X1");
            int x1 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Введите переменную Y1");
            int y1 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Введите переменную X2");
            int x2 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Введите переменную Y2");
            int y2 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Введите переменную X3");
            int x3 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Введите переменную Y3");
            int y3 = Convert.ToInt32(Console.ReadLine());

            int X1 = x2 - x1;
            int Y1 = y2 - y1;
            int underCorA1 = Convert.ToInt32(Math.Pow(X1, 2));
            int underCorB1 = Convert.ToInt32(Math.Pow(Y1, 2));
            double A = Convert.ToDouble(Math.Sqrt(underCorA1 + underCorB1));
            Console.WriteLine(A);

            int X2 = x3 - x2;
            int Y2 = y3 - y2;
            int underCorA2 = Convert.ToInt32(Math.Pow(X2, 2));
            int underCorB2 = Convert.ToInt32(Math.Pow(Y2, 2));
            double B = Convert.ToDouble(Math.Sqrt(underCorA2 + underCorB2));
            Console.WriteLine(B);

            int X3 = x1 - x3;
            int Y3 = y1 - y3;
            int underCorA3 = Convert.ToInt32(Math.Pow(X3, 2));
            int underCorB3 = Convert.ToInt32(Math.Pow(Y3, 2));
            double C = Convert.ToDouble(Math.Sqrt(underCorA3 + underCorB3));
            Console.WriteLine(C);

            double P = A + C + B;
            double p = (A + B + C) / 2;
            double s = Math.Sqrt(p * (p - A) * (p - B) * (p - C));

            Console.WriteLine($"Периметр = {P}  Площадь равна = {s}");

        }
        static void Main(string[] args)
        {
            // first();
            //second();
            //third();
            //fourth();
            five();
        }
    }
}
