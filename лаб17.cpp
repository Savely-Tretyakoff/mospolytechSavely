

#include <iostream>

void two(){
	int Arr[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90 };
	for(int i = 0; i <= 10; i++){
		int razn = Arr[i + 1] - Arr[i];
		if(Arr[i + 1] - Arr[i] == Arr[i + 2] - Arr[i + 1]){

			std::cout<<"it is arithmetic progression     \n " ;
			std::cout<<razn<<"    -difference of arithmetic progression \n" ;
			break;
		}else{
			std::cout<<"0";
		}
	}
}

void three(){
	int min = 0;
	int N = 10;
	int arrA[N] = {};
	std::cout <<"Ves massive:  \n";
	for (int i = 0; i < N; i++){
 arrA[i] = rand()%80;
 std::cout <<"  "<< arrA[i];
 if(arrA[i] < arrA[min]){
	 min = arrA[i];
 }
}
std::cout<< " \n  Minimal didid:   \n " <<min ;
}

void four(){
	int localmaxes[10] = {};

	int localmax = 0;

	int j;
	int arrA[10] = {13, 1, 10, 0, 22, 20, 66, 67, 50, 21};
	std::cout <<"Ves massive:  \n";
	for (int i = 0; i < 10; i++){
 	std::cout <<"  "<< arrA[i];
 }
 int max = localmaxes[0];
 for (int i = 1; i < 9; i++){
		if(arrA[i] > arrA[i - 1] && arrA[i] > arrA[i + 1]){

			for(int j = 0; j < 5; j++){
			localmaxes[j] = i;

				if(localmaxes[j] > max){
					max = localmaxes[j];

				}
			}
		}
		}
		std::cout<< "     The last localmax  index:    "<<max;
 	}



void five(){
	int array[10] = {5, 2, 10, 6, 1, 10, 7, 0, 11, 30};
	for(int i=0;i<10;i++)
{
		for (int j=i+1;j<10; j++)
		{
				if(array[i]==array[j])
				{
					int wasBefore=0;
					for(int k=0;k<i;k++){
						if(array[k]==array[i]) {
							wasBefore=1; break;
						}
					}
					if(wasBefore==0){
						std::cout<< " indexes of equal variables:  ";
						 std::cout<<i<<" ,";
						 std:: cout<<j<<" .";
					}
					break;
				}
		}
}
}





int main()
{
	const int N = 10; // Константа - размер массива. Размер массива должен быть неизменяемой величиной
	int Arr[N] = { 10, 20, 30, 40, 50, 60, 70, 80, 90 }; // элементы массива нумеруються с 0 до N-1
	int K, L;	// Индексы массива.
	std::cout<<"Enter the indexes   second index wod be bigger than first \n";

	std::cin>> K;
	std::cin>> L;
	int summ = 0;	// В начале сумма равна 0
	int i;		// Объявляем целую переменную.
	int otr;

if(L > K){
	for (i = K; i <= L; i++) {
		summ = summ + Arr[i];
	}
	otr = L - K + 1;
	double srsumm = summ / otr;
	std::cout << "arithmetic mean  = " << srsumm ;
	std::cout << "        Summ  = " << summ;	// Печать суммы


	std::cin.get();  // Это чтобы окно сразу не закрывалось
	std::cin.get();
}else{
	std::cout<<"Illigal indexes";
}
two();
three();
four();
five();


	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
