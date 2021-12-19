#include <iostream>
#include <algorithm>
#include <vector>
// for (int j = 0; j < 5; j++){
//   sredzn = arrayA[0] + arrayA[j];
// }
// arrayB[i] = sredzn;
// std::cout << arrayB[i] << '\n';

void twotwo1(){
  std::cout << "task 2: " << '\n';
  int summ = 0;
  int arrayA[5] = {3, 5, 7, 2, 9};
  int arrayB[5] = {0, 0, 0, 0, 0};
  for (int i = 0; i < 5; i ++){
    summ = summ + arrayA[i];
    arrayB[i] = summ / (i + 1);
    std::cout<< arrayB[i] << " ";
  }
}


void three(){
  std::cout << "task 3: " << '\n';
int arr[6] = {9, 2, 3, 4, 7, 1};
int val;
for(int i = 6; i >= 0; i--){
  if((arr[i]%2) != 0) {
    val = arr[i]; break;
  }
}
for(int c = 0; c < 6; c++){

      if((arr[c]%2) != 0) {
        arr[c] = arr[c] + val;
        std::cout << arr[c] << " ";
      }
    }
}

void four(){

  int arrayU[6] = {2, 1, 3, 5, 7, 9};
  int min = arrayU[0];
  int max = arrayU[0];
  for (int i = 0; i < 6; i++) {
    if(arrayU[i] > max){
      max = arrayU[i];

    }

    if(arrayU[i] < min){
      min = arrayU[i];

    }

  }
  std::cout<<"\n max: "<< max ;
  std::cout<<"\n min: "<< min;
  int index1 = 0;
  int index2 = 0;
  for(int j = 0; j < 6; j++){
    if(arrayU[j] == max){
      index1 = j;
      std::cout <<"index max: " << index1 << '\n';
    }

    if(arrayU[j] == min){
      index2 = j;
      std::cout <<"\n index min: " <<index2 << '\n';
    }
  }
  std::cout << "refactored array: " << '\n';
  for(int l = 0; l < 6; l++){
    if(l > index2 && l < index1){
      arrayU[l] = 0;
    }
    std::cout << arrayU[l] << " ";
  }



}

void five(){
  int arrayF[6] = {6, 1, 2, 3, 4, 5};
  std::sort( std::begin(arrayF), std::end(arrayF));
  for(int i= 0; i < 6; i++){
    std::cout << arrayF[i] << " ";
  }
}


int main(){
  std::cout<<"initial values of arrays: \n array num1: ";
  int array1[5] = {1, 22, 3, 12, 11};
  for(int i = 0; i < 5; i++){
  std::cout << array1[i]<<" ";
  }
  std::cout<<"\n array num2: ";
  int array2[5] = {95, 71, 88, 99, 26};
  for(int l = 0; l < 5; l++){
  std::cout << array2[l]<<" ";
  }

  std::swap(array1, array2);
  std::cout << " \n swaped arrays::" << '\n';
  std::cout << "swaped array num1 :  " << '\n';
  for(int i = 0; i < 5; i++){
  std::cout << array1[i] << " ";
}
  std::cout << "\n swaped array num2 :  " << '\n';
  for(int i = 0; i < 5; i++){
  std::cout << array2[i]<<" ";

}
std::cout << " "<< '\n';

five();

return 0;
}
