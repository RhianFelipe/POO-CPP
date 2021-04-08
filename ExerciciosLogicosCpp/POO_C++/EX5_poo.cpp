#include <cstdio>
#include <math.h>

 using namespace std;
 
class Quadrado{
double lado;

public:	
Quadrado(double lado){
this->lado = lado;	
}

double area(){
	
return pow(lado,2) ;	
	
}

double perimetro(){
	return 4*lado;
}

double diagonal(){

return pow(lado,2) + pow(lado,2);
	
}

void mostra(){
	 printf("Area: %.2lf \n",area());
	  printf("Perimetro: %.2lf \n",perimetro());
	   printf("Diagonal: %.2lf \n",diagonal());
}

};





int main(){
	Quadrado d1(5);
	d1.area();
	d1.diagonal();
	d1.perimetro();
	d1.mostra();
	
}
