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
  cout << "Vibirite deistvie: 4-delenie: ";
  cin >> count;
  switch (count) // начало оператора switch
  {
     case 4: // если count = 1
     {
     cout << a << " / " << b << " = " << a / b << endl; // выполнить деление
     break;
     }
     }
 system("pause");
 return 0;
}