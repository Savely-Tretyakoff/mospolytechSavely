#include <iostream>
#include <string>
using namespace std;

void two(){
   int C;
    int N;
    string arraynaprav[5] = {"gecnjnf", "Запад", "Север", "Восток", "Юг" };
    cout << "выберите начальное направление цифрами 1 - запад, 2-Север, 3-Восток, 4-Юг";
    cin >> C;
    cout << "Ваше начальное положение: " << endl << arraynaprav[C];
    cout << "Для выбора команды введите числа 0, 1 или -1 : ";
    cin >> N;
    int B = C - N;
    cout << arraynaprav[B];
}

void three(){

    string arraynomer[50] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "десятое", "одиннадцатое", "двенадцатое", "тринадцатое", "четырнадцатое", "пятнадцатое",
     "шестнадцатое", "семнадцатое", "восемнадцать", "девятнадцать", "двадцатое", "двадцать первое", "двадцать второе", "двадцать третье", "двадцать четвёртое", 
     "двадцать пятое", "двадцать шестое", "двадцать седьмое", "двадцать восьмое", "двадцать девятое", "тридцатое", "тридцать первое", "тридцать второе", 
     "тридцать третье", "тридцать четвертое", "тридцать пятое" ,"тридцать шестое" ,"трридцать седьмое", "тридцать восьмое", "тридцать девятое", "сороковое" };

    int s;
    cout << "Введите число от 10 - 40";
    cin >> s;
    if(  s > 40  && s < 10){
        cout << "Вы ввели неверное число";
    }else {
        cout << "Ваш номер в числовом формате: " << endl << s;
        cout << "Ваш номер в прописном формате: " << endl << arraynomer[s];
    }
}

//     int factor_digits(int num, int *digits, int limit)
// {
//     int digits_count = 0;
//     if (num == 0) {
//         digits[0] = 0;
//         return 1;
//     }

//     while (num > 0 && limit) {
//         digits[digits_count++] = num % 10;
//         num /= 10;
//         limit--;
//    }
//    return num ? 0 : digits_count;
// }
    
    
    
    
    void four(){
	cout << "Введите трехзначное число:";
	int P;
	cin >> P;
	switch (P / 100){
	case 1:cout << "cто ";
		break;
	case 2:cout << "двести ";
		break;
	case 3:cout << "триста ";
		break;
	case 4:cout << "четыреста ";
		break;
	case 5:cout << "пятьсот ";
		break;
	case 6:cout << "шестьсот ";
		break;
	case 7:cout << "семьсот ";
		break;
	case 8:cout << "восемьсот ";
		break;
	case 9:cout << "девятьсот ";
		break;
	}
	switch (P / 10 % 10){
	case 2:cout << "двадцать ";
		break;
	case 3:cout << "тридцать ";
		break;
	case 4:cout << "сорок ";
		break;
	case 5:cout << "пятьдесят ";
		break;
	case 6:cout << "шестьдесят ";
		break;
	case 7:cout << "семьдесят ";
		break;
	case 8:cout << "восемьдесят ";
		break;
	case 9:cout << "девясто ";
		break;
	}
	if ((P % 100> 20)or(P%100<10)){
		switch (P % 10)
		{
		case 1:cout << "один ";
			break;
		case 2:cout << "два ";
			break;
		case 3:cout << "три ";
			break;
		case 4:cout << "четыре ";
			break;
		case 5:cout << "пять ";
			break;
		case 6:cout << "шесть ";
			break;
		case 7:cout << "семь ";
			break;
		case 8:cout << "восемь ";
			break;
		case 9:cout << "девять ";
			break;
		}
	}
	switch (P % 100){
	case 11:cout << "одиннадцать ";
		break;
	case 12:cout << "двенадцать ";
		break;
	case 13:cout << "тринадцать ";
		break;
	case 14:cout << "четырнадцать ";
		break;
	case 15:cout << "пятнадцать ";
		break;
	case 16:cout << "шестнадцать ";
		break;
	case 17:cout << "семнадцать ";
		break;
	case 18:cout << "восемьнадцать ";
		break;
	case 19:cout << "девятнадцать ";
		break;
	}
	return 0;
}





    //     int factored_number[2];
    //     int g;
    //     cout << "введите";
    //     cin >> g;
    //     int factored_number_len = factor_digits(g, factored_number, 2);
        
    
    // string arraysto[10] = {"ноль","Сто", "Двесте", "Тристо", "Четыресто", "Пятьсот", "Шестьсот", "Семьсот", "Восемьсот", "Девятьсот"};
    // string arraydesyat[10] = {"ноль","Десять", "одинадцать", "двенадцать", "тренадцать", "четырнадцать", "пятьнадцать", "Шеснадцать", "восемьнадцать ", "девятнадцать"};
    // string arraydvadplus[9] = {"ноль","двадцать", "тридцать", "сорок", "пятьдесят", "шестьдесят", "семьдесят", "восемьдесят", "девяносто "};
    // string arrayodinplus[9] = {"ноль","один", "два", "три", "четыре", "пять", "шесть", "семь", "восемь"};

    // if( g > 99 && g < 1000){

    //     int arraycifres[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8 , 9};
    //     for(int i = 0; i< 10; i++)
    //     if(factored_number[0] == arraycifres[i] + 1){
    //        string one =  arraysto[i];
    //     }

    //     int arraycifres1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8 , 9};
    //     for(int i = 0; i< 10; i++)
    //     if(factored_number[1] == arraycifres[i] + 1 && arraycifres[i] + 1 == 2){
    //     string dvad = arraydvadplus[i];
    //     }else{
    //         string two =  arraydesyat[i];
    //     }


    //     int arraycifres2[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8 , 9};
    //     for(int i = 0; i< 10; i++)
    //     if(factored_number[2] == arraycifres[i] + 1 ){
    //     string three = arrayodinplus[i];
    //     }
    // }else{
    //     cout << "Введено число не подходящее условию";
    // }
    //     cout << one << two << three;
void five(){
	int year;
	cout << "Введите любой год начиная с 1984 заканчивая 2044";
	cin >> year;
	if(year <= 1996){
		cout << "Зеленый ";
	
	}else if(year <= 2008){
		cout << "Красный ";

	}else if(year <= 2020){
		cout << "желтый";
	
	}else if(year <= 2032){
		cout << "белый";
	
	}else if(year <= 2044){
		cout << "Черный";
		
	}else{
	return 0;
	}
	int razn = year - 1984;
	string arrayanimals[12] = {"крысы", "коровы", "тигра", "зайца", "дракона", "змеи", "лошади", "овцы", "обезьяны", "курицы", "собаки ", "свиньи"  };
	for(int i = 0; i <= 12; i++){
	if(i == razn){
		cout << arrayanimals[i];
		break;
	
	}else if(i == razn - 12){
		cout << arrayanimals[i];
		break;
	}else if(i == razn - 24){
		cout << arrayanimals[i];
		break;
	}else if(i == razn - 36){
		cout << arrayanimals[i];
		break;
	}else if(i == razn - 48){
		cout << arrayanimals[i];
		break;
	}else if(i == razn - 60){
		cout << arrayanimals[i];
		break;
	}else{
    cout << "";
	}
	}


}


int main(){
//  задание №1;
        int X;
    int n;


     string arraynumbers[32] = {"нулевое", "первое" , "второе" , "третье", "четвертое" , "пятое" , "шестое" , "седьмое", "восьмое" , "девятое" , "десятое" , "одиннадцатое" ,
     "двенадцатое" , "тринадцатое" , "четырнадцатое" , "пятнадцатое" , "шестнадцатое" , "семнадцатое" , "восемнадцатое" , "девятнадцатое" , "двадцатое" ,
      "двадцать первое" , "двадцать второе" , "двадцать третье", "двадцать четвертое" , "двадцать пятое" , "двадцать шестое" , "двадцать седьмое" , 
      "двадцать восьмое" , "двадцать девятое" , "тридцатое" , "тридцать первое"};


     string arraymonths[13] = {"ничего", "Февраля", "Марта", "Апреля", "Мая", "Июня", "Июля", "Августа", "Сентября", "Октября", "Ноября", "Декабря"};

     



    cout << "Введите число и номер месяца: ";
    cin >> X, n;
    cout << arraynumbers[X] << endl << arraymonths[n];




return 0;
}


