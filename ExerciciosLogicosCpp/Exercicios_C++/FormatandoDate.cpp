#include <iostream>
#include <iomanip>//  Biblioteza que fornece uma hora em uma estrutura de horas e uma cadeia de caracteres de formato para ser usada
                 //Permite o ciclo conveniente de cadeias de caracteres, com operadores de inserção e extração
using namespace std;
int main()
{
    int D,M,A;
cout << "Digite a Data de hoje no formato DD/MM/AA \n";
cout << "Dia:";
cin >> D ;
cout << "Mes:";
cin >> M ;
cout << "Ano:";
cin >> A;
//setw para usar a condição se tiver menos de 2 casas, e o setfill para colcoar o 0 caso a condição seja concebida.
cout << endl << "A data formatada: " << setw(2) << setfill('0')<<  D  << "/" << setw(2) << M << "/" << A;
}
