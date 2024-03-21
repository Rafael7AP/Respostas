#include <iostream>
#include <windows.h>

using namespace std;

void fibonacci(int n)
{
    int primeiro = 0, segundo = 1, proximo;
    for (int i = 0; i < n; i++)
    {
        if (i <= 1)
        {
            proximo = i;
        }
        else 
        {
            proximo = primeiro + segundo;
            primeiro = segundo;
            segundo = proximo;
        }
            cout << proximo << " ";
    }
}

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int x;

    cout << "Defina um número de termos para serem impressos" << endl;
    cin >> x;

    fibonacci(x);

    cout << endl
         << endl;
    return 0;
}
