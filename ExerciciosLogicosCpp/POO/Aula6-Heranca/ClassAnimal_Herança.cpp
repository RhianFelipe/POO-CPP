#include <iostream>
#include <string>
using namespace std;

class Animal{

string nome;
int idade;
double peso;
public:	
    Animal(string nome , int idade){
    	this->nome = nome;
    this->idade = idade;
	}
 
	void classificacao(){
		cout << "\n-Animal";
		
	}
	 void comida();
	void fazerbarulho();
	
	void mostra(){
		cout << "\nNome:" <<nome;
		cout << "\nIdade:" << idade;
	}
};

class Ave : public Animal{
	public:
		Ave(string nome, int idade) : Animal(nome, idade) {}
		void classificacao(){
			cout << "\n--Ave";
		}
	
	void comida(){
		cout << "\nComida: Alpiste";
	}
	
	
		
	
	
};

class Passaro : public Ave{
	
string cor;
public:
	Passaro(string nome, int idade, string cor) :Ave(nome , idade) {
	this->cor = cor;
	}
	
	void classificacao(){
		Animal::classificacao();
		Ave::classificacao();
		cout << "\n--Passaro";
	}
	void fazerBarulho(){
		cout << "\nPiu piu\n";
	}
	void mostra(){
		Animal::mostra();
		cout <<"\nCor:" << cor;
	}
	
};	
class Mamifero: public Animal{
	string raca;
public:			

	Mamifero(string nome, int idade, string raca) : Animal(nome , idade){
	  this->raca = raca;
		}	
		void classificacao(){
			Animal::classificacao();
			cout <<"\n--Mamifero";
		}
		void mostra(){
			Animal::mostra();
			 cout << "\nRaca:" << raca;
		}
};

class Gato : public Mamifero{
	string cor;
	public:
		
		Gato(string nome, int idade, string raca, string cor): Mamifero(nome, idade, raca){
			this->cor = cor ;
			
		}
		void mostra(){
			Mamifero::mostra();
			cout << "\nCor:" << cor;
		}
		
		void classificacao(){
			Mamifero::classificacao();
			cout << "\n--Gato";
		}
	void comida(){
		cout << "\nComida: peixe";
	}
	void fazerBarulho(){
		cout << "\nBarulho: miau\n";
	}
	
	
};

class Cachorro : public Mamifero{
public:
	Cachorro(string nome, int idade, string raca) : Mamifero(nome,idade,raca){}
	
	void mostra(){
		Mamifero::mostra();
		
	}
			void classificacao(){
			Mamifero::classificacao();
			cout << "\n--Cachorro";
		}		
	void comida(){
		cout << "\nComida:carne";	
	}
	void fazerBarulho(){
		cout <<"\nBarulho:au au\n";
	}
};





int main(void){
Passaro p1("Piu", 5, "Azul");
p1.classificacao();
p1.mostra();
p1.comida();
p1.fazerBarulho();

Gato g1("Fredi",13, "Persa", "Laranja");

g1.classificacao();
g1.mostra();
g1.comida();
g1.fazerBarulho();



Cachorro c1("Bilu", 8, "Labrador Mestico");

c1.classificacao();
c1.mostra();
c1.comida();
c1.fazerBarulho();
	
	
}
