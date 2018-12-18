#include <iostream>
 using namespace std;
 
 int main(int argc, char* argv[])
 {
  int count; // переменная для выбора в switch
  double a,b; // переменные для хранения операндов
  cout << "Vvedite pervoe chislo: ";
  cin >> a;
  cout << "Vvedite vtoroe chislo: ";
  cin >> b;
  cout << "Vibirite deistvie: 3-ymnojenie: ";
  cin >> count;
  switch (count) // начало оператора switch
  {
     case 3: // если count = 3
     {
     cout << a << " * " << b << " = " << a * b << endl; // выполнить умножение
     break;
     }
     }
 system("pause");
 return 0;
}