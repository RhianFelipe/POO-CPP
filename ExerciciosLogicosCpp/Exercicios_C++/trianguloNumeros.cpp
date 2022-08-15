#include <iostream>
#include <stdio.h>

#include <conio.h>

#include <stdlib.h>
using namespace std;
int main ()

{
int n, i, j, l, k;

cout << "Digite um número ímpar que será o número máximo do triângulo:\n";

do{
cin >> n;
if(n%2 == 0)
cout <<"Número inválido.\n";

}
while (n%2 == 0); //verifica par
 
 l = 0;
for (i = 1; i <= n; i++){
       for (k = 0; k < l; k++){

        cout << " ";

       }

 cout << i << " ";

 for (j = i+1; j <= n; j++)
  cout << j << " "; 
  n -= 1;
  cout << "\n";

           l += 2;
}

  

   return 0;

}
