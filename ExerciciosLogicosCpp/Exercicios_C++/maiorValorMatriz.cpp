//1. Crie um programa capaz de ler os dados de uma matriz quadrada de inteiros.
//Ao final da leitura o programa deverá imprimir o número da linha 
//que contém o menor dentre todos os números lidos.


#include <iostream>

using namespace std;
int main()
{
    int matriz[4][4];
 int resultado;

    for (int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++){
            
            cout << "Entre com o valor de [" << i << "]" <<"[" << j << "] \n";
            cin >> matriz[i][j];
            
        }
    }
    int max = matriz[0][0];
   for (int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++){
            if(matriz[i][j] > max ){
               max = matriz[i][j];
      
            }
           
        }
    }
          cout << "Resultado Maior:" << max << "\n";
    
    return 0;
}
