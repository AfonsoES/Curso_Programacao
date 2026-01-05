#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	int R, M,conta=1;
	cin >>R ;
	cin >> M;
	do
	{
		R++;
		M++;
		conta++;
	} while (R != M/2);
	cout << conta;


	return 0;
}