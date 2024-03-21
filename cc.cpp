#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  int indice = 13, soma = 0, k=0;

  while (k<indice)
  {
    k=k+1;
    soma = soma + k;
  }
  cout << soma;
  
 
 
  cout << endl << endl;
  return 0;
}