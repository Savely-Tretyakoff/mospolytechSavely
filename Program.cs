using System;

namespace ConsoleApp1
{
    class Program
    {
        static void first()
        {
            Console.WriteLine("Введите числа А и Б");
            int a = Convert.ToInt32(Console.ReadLine());
            int b = Convert.ToInt32(Console.ReadLine());
            int S = a * b;
            int P = 2 * (a + b);
            Console.WriteLine($"Периметр = {P} Площадь = {S}");
        }
        static void second()
        {
            double pi = 3.14;
            Console.WriteLine("Введите диаметр нужной окружности");
            int d = Convert.ToInt32(Console.ReadLine());
            double L = pi * d;
            Console.WriteLine($"Длинна = {L}");
        }
        static void third()
        {
            Console.WriteLine("Введите два числа чтобы получить их среднее арифметическое");
            double a = Convert.ToDouble(Console.ReadLine()); 
            double b = Convert.ToDouble(Console.ReadLine());
            double d = (a + b) / 2;
            Console.WriteLine($"Значение равно: {d}");
        }
        static void fouth()
        {
            Console.WriteLine("Введите два числа");
            int a = Convert.ToInt32(Console.ReadLine());
            int b = Convert.ToInt32(Console.ReadLine()); //считали с консоли числа
            int Aqudro = a * a; 
            int Bquadro = b * b; // подсчет квадратов чисел
            int sum = Aqudro + Bquadro;
            int min = Aqudro - Bquadro;
            int umn = Aqudro * Bquadro;
            Double del = Convert.ToDouble(Aqudro) / Convert.ToDouble(Bquadro);//обьявление формул
            if (a != 0&&b !=0)//оператор IF проверка на не ноль
            {
                Console.WriteLine($"Сумма = {sum}  Разность = {min}  Произведение = {umn}  Частное = {del}");
            }
        }
        static void fiveth()
        {
            Console.WriteLine("Введите два числа");
            int a = Convert.ToInt32(Console.ReadLine());
            int b = Convert.ToInt32(Console.ReadLine());//считывание с консоли чисел    
            int sum = Math.Abs(a) + Math.Abs(b);
            int min = Math.Abs(a) - Math.Abs(b);
            int umn = Math.Abs(b) * Math.Abs(a);
            double del = Convert.ToDouble(Math.Abs(a)) / Convert.ToDouble(Math.Abs(b));//Обьявление формул
            if (a != 0 && b != 0)//проверка на не ноль
            {
                Console.WriteLine($"Сумма = {sum}  Разность = {min}  Произведение = {umn}  Частное = {del}");
            }
        


        }
      
        static void Main(string[] args)
        {
            first();
            second();
            third();
            fouth();
            fiveth();
           
        }
    }
}
