
#include <iostream>
#include <string>
using namespace std;
int main(void)
{
  int n ;
  string s1 ;
  
  cout << "Digite um valor entre 1 e 9:";
  cin >> n;
  //Switch case para condições
  //Existe melhores formas de resolver o problema, principalmente se forem mais números
  if(n > 0 && n < 10){
  	switch(n){
  		case 1: cout << ("Um")    ;break;
  		case 2: cout << ("Dois")  ;break;
		case 3: cout << ("Tres")  ;break;
		case 4: cout << ("Quatro");break;
		case 5: cout << ("Cinco") ;break;
		case 6: cout << ("Seis")  ;break;
		case 7: cout << ("Seta")  ;break;
		case 8: cout << ("Oito")  ;break;
		case 9: cout << ("Nove")  ;break;
  }
  
  	
  } else {
  		cout << "O valor digitado nao esta entre 1 e 9";
  }

  
  
  

}

