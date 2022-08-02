#include <cstdio>



class Data {
int dia;
int mes;
int ano;

public:#include <cstdio>
#include <iostream>


class Data {
int _dia;
int _mes;
int _ano;

public:

Data(int dia , int mes , int ano ):_dia(dia),_mes(mes),_ano(ano) {}

~Data(){}
void mostra();

int getDia()const{return _dia;}
int getMes()const{return _mes;}
int getAno()const{return _ano;}

//void setDia(int dia){if(dia <= 1 and dia >= numDiaMes())this->dia = dia; else printf("Dia invalido!");}

bool anoBissexto();
void mostraAnoBissexto();
int trimestre();
void mostraTrimestre();
int numDiasMes();
void mostraNumDiasMes();

};



Data(int , int , int );
~Data();
void mostra();

int getDia(){return this->dia;}
int getMes(){return this->mes;}
int getAno(){return this->ano;}

//void setDia(int dia){if(dia <= 1 and dia >= numDiaMes())this->dia = dia; else printf("Dia invalido!");}

bool anoBissexto();

void mostraAnoBissexto();
int trimestre();
void mostraTrimestre();
int numDiasMes();
void mostraNumDiasMes();

};
