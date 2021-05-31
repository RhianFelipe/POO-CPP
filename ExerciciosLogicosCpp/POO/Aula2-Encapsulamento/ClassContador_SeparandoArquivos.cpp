#include <iostream>
#include <string>
using namespace std;
//.h exportar
class Contador{
	private: //O jeito certo de você implementar num empresa
	int num; //atributo
	string nome;
	
public: // você tem que colocar que é publico, se não da erro, pois tudo ja é privado

	
	//Metodos
	void comeca(string);
	void incrementa();
	int retorna_valor();
	void mostra();
};

//.cpp

void Contador::comeca(string n){
	
	num = 0;
	nome = n;
}

void Contador::incrementa (){
	num++;
}

int Contador::retorna_valor(){
	return num;
}

void Contador::mostra(){
 cout << endl << nome << ":" << retorna_valor();
}

//main e onde uso a Classe
int main(){
	Contador c1,c2; //Objetos
	//c1.num = 0 n funciona, apenas na prog estruturada
	c1.comeca("C1");
	c2.comeca("C2");
	
	c1.incrementa();
	c1.incrementa();
    c2.incrementa();	
    
    c1.mostra();
    c2.mostra();
    
    
	
	
}
