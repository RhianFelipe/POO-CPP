#include <cstdio>



class Data {
int dia;
int mes;
int ano;

public:

Data(int , int , int );
~Data();
void mostra();
//int getDia(){
//	return this->dia;
//}
//getmes
//getano
/*void setDia(int dia){
	if(dia <= 1 and dia >= numDiaMes())
		this->dia = dia;
	 else printf("Dia invalido!")
}
*/
bool anoBissexto();
void mostraAnoBissexto();
int trimestre();
void mostraTrimestre();
int numDiasMes();
void mostraNumDiasMes();

};
