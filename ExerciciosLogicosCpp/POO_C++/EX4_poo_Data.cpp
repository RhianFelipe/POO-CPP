#include <cstdio>



class Data {
int dia;
int mes;
int ano;

public:
Data(int d, int m, int a) { // construtor
dia = d;
mes = m;
ano = a;
}

//getters

int getDia(){
	return this->dia;
}

int getMes(){
	return this->mes;
}

int getAno(){
	return this->ano;
}

//setters

void setDia(int d){
	dia = d;
}

void setMes(int m){
	
	if(m>0 and m <=12){
		mes = m;
	}else
	   printf("\n Mes invalido!");
}

void setAno(int a){
	ano = a;
}


void mostra() {
printf("\n%02d/%02d/%d ", dia, mes, ano);
}

~Data() { // destrutor
printf("\nObjeto destruido");
}

bool anoBissexto() {
if( ano % 4 == 0) {
if( ano % 100 == 0) {
if( ano % 400 == 0)
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
return (mes-1)/3 + 1;
}



void mostraTrimestre() {
printf("\nData esta no %do trimestre", trimestre());
}

int numDiasMes() {
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

void mostraNumDiasMes() {
printf("\nNumero dias do mes da data = %d", numDiasMes());
}
};



int main() {
Data d1(5,4,2021), d2(1,1,2020);

d1.mostra();
d1.mostraAnoBissexto();
d1.mostraTrimestre();
d1.mostraNumDiasMes();

d2.mostra();
d2.mostraAnoBissexto();
d2.mostraTrimestre();
d2.mostraNumDiasMes();
}
