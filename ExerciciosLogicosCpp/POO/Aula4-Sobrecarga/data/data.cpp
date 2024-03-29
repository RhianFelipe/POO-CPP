
#include "data.h"
#include <cstdio>

Data::Data(int d, int m, int a) { // construtor
_dia = d;
_mes = m;
_ano = a;
}

void Data::mostra() {
printf("\n%02d/%02d/%d ", _dia, _mes, _ano);
}

Data::~Data() { // destrutor
printf("\nObjeto destruido");
}

bool Data::anoBissexto() {
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

void Data::mostraAnoBissexto() {
if( anoBissexto() )
printf("\nData esta em ano bissexto");
else
printf("\nData nao esta em ano bissexto");

}

int Data::trimestre() {
return (_mes-1)/3 + 1;
}



void Data::mostraTrimestre() {
printf("\nData esta no %do trimestre", trimestre());
}

int Data::numDiasMes() {
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

void Data::mostraNumDiasMes() {
printf("\nNumero dias do mes da data = %d", numDiasMes());
}


