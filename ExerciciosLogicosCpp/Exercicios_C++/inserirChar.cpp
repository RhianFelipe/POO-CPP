// Faça uma rotina que insira um caracter em uma string do tipo char Str[100], dada a posição do caracter.
#include <iostream>

using namespace std;

int main() {
  char palavra[100];
  int posicao;
  char letra;
  cout << "Digite a palavra:" << endl;
  cin >> palavra;
  int i = 0;
  cout << "Digite a posiçao que deseja retirar:" << endl;
  cin >> posicao;
  cout << "Digite a letra que deseja colocarretirar:" << endl;
  cin >> letra;
  while (palavra[i] != '\0') { // enquanto não chegar no fim da palavra
    if (posicao == i) { // veja se a posicao pedida é a mesma da posiçao da palavra
      palavra[i] = letra; //coloca a letra no lugar da posicao pedida
    }
    i++;
  }

  cout << "Ultimo: " << palavra << endl;

  return 0;
}
