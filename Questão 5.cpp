#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  string palavra;

  cout << "Escreva uma palavra para ser escrita ao contrário: ";
  cin >> palavra;
  system("cls");

  cout << palavra << " ao contrário é: ";
  for (int i = palavra.size()-1 ; i >= 0; i--) 
  {
    cout << palavra[i];
  }

 
  cout << endl << endl;
  return 0;
}