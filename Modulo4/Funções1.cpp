#include <iostream>
#include <cstdlib>
#include <time.h>
#include <locale.h>
#include <string>
#include <Windows.h>
using namespace std;

void Media(int N[10])
{
    int soma = 0;
    for (int i = 0; i < 10; i++) soma += N[i];
    cout << "A média dos números é: " << soma/10 << endl;
}
void Menor(int N[10])
{
    int menor = 2147483647;
    for (int i = 0; i < 10; i++)
    {
        if (N[i] < menor) menor = N[i];
    }
    cout << "O menor número é: " << menor << endl;
}
void Maior(int N[10])
{
    int maior = -2147483647;
    for (int i = 0; i < 10; i++)
    {
        if (N[i] > maior) maior = N[i];
    }
    cout << "O maior número é: " << maior <<endl;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int numeros[10];
    cout << "Escreve 10 números: ";
    for (int i = 0; i < 10; i++) cin >> numeros[i];
    system("cls");
    int R;
    while (true)
    {
        cout << "**************************\n";
        cout << "           Isto :)\n";
        cout << "**************************\n";
        cout << "1- Média\n";
        cout << "2- Menor\n";
        cout << "3- Maior\n";
        cout << "0- Sair\n";
        cout << "**************************\n";
        cin >> R;
        switch (R)
        {
        case 1:
            Media(numeros);
            system("pause");
            system("cls");
            break;
        case 2:
            Menor(numeros);
            system("pause");
            system("cls");
            break;
        case 3:
            Maior(numeros);
            system("pause");
            system("cls");
            break;
        case 0:
            return 0;
            break;
        default:
            break;
        }
    }
}
