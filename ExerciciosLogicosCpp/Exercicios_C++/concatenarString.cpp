/*Faça um programa que entre com 2 strings
pelo teclado. Então faça um programa que:
– copie a string 1 para a string 3
– concatene a string 2 na string 3
– verifique se a string 1 é menor, maior ou igual a
string 2
– mostre as 3 strings
– mostre o tamanho das 3 strings*/

#include <iostream>
#include <string> //Biblioteca para manipulacao de String
using namespace std;

int main(void){

string s1,s2,s3, concats2s3; //declarando uma variavel do tipo string
cout << "Digite a primeira palavra para concatenar:";
cin >> s1;
cout << "Digite a segunda palavra para concatenar:";
cin >> s2;
s3 = s1;
s3 = s3 + s2 ;//ou vice-versa


if(s1 < s2) cout << s1 << " < " << s2 << "\n";
if(s1 > s2) cout  << s1 << " > " << s2 << "\n";
if(s1 == s2) cout  <<  "Iguais\n";

cout << "Primeira String: "<< s1 << "\n" << "Segunda String: " << s2 << "\n" << "Terceira String(Concatenada): " << s3 << "\n" ; 

cout << "Tamanho da primeira String: " << s1.size() << "\n";
cout << "Tamanho da segunda String: " << s2.size() << "\n";
cout << "Tamanho da terceira String: " << s3.size() << "\n";

}





