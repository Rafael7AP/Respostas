#include <iostream>
#include <windows.h>

using namespace std;

bool Fibonacci(int n)
{
    int primeiro = 0, segundo = 1, proximo;
    while (segundo < n)
    {
        proximo = segundo;
        segundo = primeiro + segundo;
        primeiro = proximo;
    }
    return segundo == n;
}
int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int num;

    cout << "Digite um numero inteiro: ";
    cin >> num;

    if (Fibonacci(num))
    {
        cout << "\n"
             << num << " pertence a sequencia de Fibonacci." << endl;
    }
    else
    {
        cout << "\n"
             << num << " nao pertence a sequencia de Fibonacci." << endl;
    }

    cout << endl
         << endl;
    return 0;
}