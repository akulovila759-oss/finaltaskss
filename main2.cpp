#include <iostream>
#include <windows.h>
    
   // (x + y) * (l - ( k % g))
  
   
int main(){
    // Устанавливаем кодировку UTF-8 для ввода и вывода
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);


float x = 10;
float y = 14;
float l = 100;
int k = 20;
int g = 10;

     std::cout << "(x + y) * (l - ( k % g )) = ?" << std::endl; 
    float firstAct = x + y;
   // std::cout << firstAct << std::endl << std::endl;

       // std::cout << "Решение второго действия: "; 
        double secondAct = l - k % g;
       // std::cout << secondAct << std::endl << std::endl;

            std::cout << "Ответ задачи: (10 + 14) * (100 - (20 % 10)) = "; 
            float thirdAct = firstAct * secondAct;
            std::cout << thirdAct;





}   
    





    









  

  