//13. Faça um rotina que remova um caracter de uma string do tipo char Str[100], dada a posição do caracter.
#include <iostream>

using namespace std;

int main() {
  char palavra[100];
  int posicao;
  cout << "Digite a palavra:" << endl;
  cin >> palavra;
  int i = 0;
    cout << "Digite a posiçao que deseja retirar:" << endl;
  cin >> posicao;
  while (palavra[i] != '\0') { // enquanto não chegar no fim da palavra
    if (posicao == i) { // veja se a posicao pedida é a mesma da posiçao da palavra
        palavra[i] = ' '; //deixa branco o local pedido
    }
    i++;
  }

  cout << "Ultimo: " << palavra << endl;

  return 0;
}
