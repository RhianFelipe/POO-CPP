#include <iostream>
#include <string>
using namespace std;

// pessoa.h
class Pessoa {
protected: // dentro das classes filhas
	string nome;
public:
	Pessoa(){
	};
	Pessoa(string);
	string getNome();
	void setNome(string);
	void mostra();
};

// pessoa.cpp
Pessoa::Pessoa(string nome) {
	this->nome = nome;
}

string Pessoa::getNome() {
	return nome;
}

void Pessoa::setNome(string nome) {
	this->nome = nome;
}

void Pessoa::mostra() {
	cout << "\n\nPESSOA";
	cout << "\nNome: " << nome;
}

// funcionario.h
class Funcionario : public Pessoa {
protected:
	double salario_base;
public:
	Funcionario(string, double);
	double getSalario();
	double getSalarioAnual();
	void mostra();
};

// funcionario.cpp
Funcionario::Funcionario(string nome, double salario) 
: Pessoa(nome) {
	if(salario < 0)
		this->salario_base = 0;
	else
		this->salario_base = salario;
}

double Funcionario::getSalario() {
	return salario_base * 1.10;
}

void Funcionario::mostra() {
	cout << "\n\nFUNCIONARIO";
	cout << "\nNome: " << nome;	
	cout << "\nSalario: " << getSalario();
}

// professor.h
class Professor : public Funcionario {
protected:
string  disciplinas;

public:
	Professor(string, double, string);
	double getSalario();
	void mostra();
	string getDisciplina();
};

// professor.cpp
Professor::Professor(string nome, double salario,string disciplinas) 
: Funcionario(nome, salario) {
   this->disciplinas = disciplinas ;
}

double Professor::getSalario() {
	return salario_base * 1.15;
}

string Professor::getDisciplina(){
	return disciplinas;
}

void Professor::mostra() {
	cout << "\n\nPROFESSOR";
	cout << "\nNome: " << nome;	
	cout << "\nSalario: " << getSalario();
	cout << "\nDisciplina: " << getDisciplina();
}
//coordenador.h
class Coordenador : public Funcionario {
	
	public:
		Coordenador(string, double);
		double getSalario();
		void mostra();
		
};
//coordenador.cpp
Coordenador::Coordenador(string nome, double salario)
: Funcionario(nome, salario) {}

double Coordenador::getSalario(){
	return salario_base * 2.0;
}
void Coordenador::mostra(){
	cout << "\n\nCOORDENADOR";
	cout << "\nNome:" << nome;
	cout << "\nSalario: " << getSalario();
}

// main.cpp
int main() {
	Pessoa p1("Felipe");
	p1.mostra();
	
	Funcionario f1("Vinicius",5000);
	f1.mostra();
	
	Professor pr1("Diogenes",2000, "POO");
	pr1.mostra();
	
	Coordenador c1("Liz", 3000);
	c1.mostra();
	
	Pessoa v[10] = {Pessoa("Rhian"), Pessoa("")};
	 v[0] = p1;
	for(int i = 0 ; i < 10; i++){
		
		if(v[i].getNome() != "")
		v[i].mostra();
	}
	

	
}

