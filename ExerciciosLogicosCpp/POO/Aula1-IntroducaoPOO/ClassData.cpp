#include <cstdio>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <time.h>
using namespace std;


class Data {
int _dia;
int _mes;
int _ano;

public:
Data(int dia, int mes, int ano): _dia(dia), _mes(mes),_ano(ano) { // construtor}
Data(){
time_t mytime;
    mytime = time(NULL);
    struct tm tm = *localtime(&mytime);
    printf("Data: %d/%d/%d/\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
	
}

Data(int mes, int ano):_mes(mes),_ano(ano){
	_dia = 1;
}

//getters

int  getDia() const{
	return this->dia;
}

int getMes() const{
	return this->mes;
}

int getAno() const{
	return this->ano;
}

//setters

void setDia(int dia){
	_dia = dia;
}

void setMes(int mes){
	
	if(mes>0 and mes <=12){
		_mes = mes;
	}else
	   printf("\n Mes invalido!");
}

void setAno(int ano){
	_ano = ano;
}


void mostra() {
printf("\n%02d/%02d/%d ", _dia, _mes, _ano);
}

~Data() { // destrutor
printf("\nObjeto destruido");
}

bool anoBissexto() {
if( _ano % 4 == 0) {
if( _ano % 100 == 0) {
if( _ano % 400 == 0)
return true; // % 400
else
return false; // % 100
}
else
return true; // % 4
}
else
return false;
}

void mostraAnoBissexto() {
if( this->anoBissexto() )
printf("\nData esta em ano bissexto");
else
printf("\nData nao esta em ano bissexto");

}

int trimestre() {
return (_mes-1)/3 + 1;
}



void mostraTrimestre() {
printf("\nData esta no %do trimestre", trimestre());
}

int numDiasMes() {
switch(_mes) {
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

void mostraNumDiasMes() {
printf("\nNumero dias do mes da data = %d", numDiasMes());
}
};



int main() {
Data d1(5,4,2021), d2(1,1,2020);
Data();
d1.mostra();

d1.mostraAnoBissexto();
d1.mostraTrimestre();
d1.mostraNumDiasMes();

d2.mostra();
d2.mostraAnoBissexto();
d2.mostraTrimestre();
d2.mostraNumDiasMes();

d1.getMes();

}
