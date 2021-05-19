#include <cstdio>
#include <iostream>
using namespace std;

class Data {
	int dia;
	int mes;
	int ano;
	const double PI = 3.14;
	static int cont;	// contador de objetos
	
public:
	Data() {		// construtor
		dia = 1;
		mes = 1;
		ano = 2000;
		cont++;
	}
	
	Data(int d, int m, int a) {		// construtor
		dia = d;
		mes = m;
		ano = a;
		cont++;
	}
	
	// getters
	
	int getDia() const {
		return this->dia;
	}
	
	int getMes() const {
		return this->mes;
	}
	
	int getAno() const {
		return this->ano;
	}
	
	// setters
	
	void setMes(int m) {
		if( m>=1 and m<=12 )
			mes = m;
		else
			printf("\nMes invalido");	
	}
	
	void setAno(int a) {
		ano = a;
	}
	
	void mostra() const {
		printf("\n%02d/%02d/%d ", dia, mes, ano);
	}
	
	~Data() {	// destrutor
		printf("\nObjeto destruido");
		cont--;
	}
	
	bool anoBissexto() const {
		return anoBissexto(this->ano);
	}
	
	static bool anoBissexto(int ano) {
		if( ano % 4 == 0) {
			if( ano % 100 == 0) {
				if( ano % 400 == 0)
					return true;  // % 400
				else
					return false; // % 100
			}
			else
				return true;  // % 4
		}
		else
			return false;
	}
	
    void mostraAnoBissexto() const {
		if( this->anoBissexto() ) 
			printf("\nData esta em ano bissexto");
		else
			printf("\nData nao esta em ano bissexto");
    	
	}
	
	int trimestre() const {
		return (mes-1)/3 + 1;
	}	

	void mostraTrimestre() const {
		printf("\nData esta no %do trimestre", trimestre());
	}
	
	int numDiasMes() const {
		switch(mes) {
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				return 31;
				break;
			case 2:
				if(anoBissexto())
					return 29;
				else
					return 28;
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				return 30;
			default:
				return 0;
		}
	}
	
	void mostraNumDiasMes() const {
		printf("\nNumero dias do mes da data = %d", numDiasMes());
	}
	
	static int getCont() {
		return cont;
	}
};

int Data::cont = 0;

int main() {
	{
		Data d1;
		d1.setAno(1999);
		d1.mostra();
	
		const Data natal(25,12,2021);
		natal.mostra();
		cout << "\n" << natal.getMes();
		cout << "\n" << Data::getCont();
	}
	cout << "\n" << Data::getCont();
	{
		cout << "\n1492=" << Data::anoBissexto(1492);
		Data d1, d2;
		cout << "\n" << Data::getCont();
	}
}
