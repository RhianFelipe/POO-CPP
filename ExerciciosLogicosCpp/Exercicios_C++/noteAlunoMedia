//Escreva um programa que leia 3 notas de um aluno e a média das notas dos exercícios realizados por ele. 
//Calcular a média de aproveitamento, usando a fórmula: MA = (N1 + N2*2 + N3*3 + ME)/7. A partir da média, informar o conceito de acordo com a tabela:
//maior ou igual a 9	A
//maior ou igual a 7.5 e menor que 9	B
//maior ou igual a 6 e menor que 7.5	C
//maior ou igual a 4 e menor que 6	D
//menor que 4	E


#include <iostream>

using namespace std;
int main()
{
    
    float notas[4];
    float media;
       float mediaAproveitamento;
    for (int i = 1;  i < 4; i++) {
     cout << "Digite a nota N" << i <<" \n";
     cin >> notas[i];
    }
    
    media = (notas[1] + notas[2] + notas[3])/3;
    mediaAproveitamento = (notas[1] + (notas[2]*2) + (notas[3]*3) + media);
    mediaAproveitamento = mediaAproveitamento/7;
    
    if( mediaAproveitamento > 9 || mediaAproveitamento == 9){
        cout << "O Aluno recebeu um A";
    }else if( mediaAproveitamento > 7.5 || mediaAproveitamento == 7.5 && mediaAproveitamento < 9 ){
     cout << "O Aluno recebeu um B";
    }else if(mediaAproveitamento > 6 || mediaAproveitamento == 6 && mediaAproveitamento < 7.5){
       cout << "O Aluno recebeu um C"; 
    }else if(mediaAproveitamento > 4 || mediaAproveitamento == 4 && mediaAproveitamento < 6){
        cout << "O Aluno recebeu um D";
    }else{
        cout << "O Aluno recebeu um E";
    }
    
   
    
    return 0;
}
