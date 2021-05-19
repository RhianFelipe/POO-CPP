#include <cstdio>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;


class Ponto{


public:
float x;
float y;
Ponto(){
	
}

Ponto(float x, float y){
  this->x = x;
  this->y = y;	
}

void mostra(void){
	printf("\n{%.2f,%.2f}",x,y);
}

float getX(){
	return x;
}



float getY(){
	return y;
}



float distancia(float x, float y){
	
int xDiff = this->x - x ;
   int yDiff = this->y - y;
   return sqrt(xDiff*xDiff + yDiff*yDiff);
		
}

float distancia(Ponto p1){
	int xDiff = this->x - p1.x;	
	int yDiff = this->y - p1.y;	
}

};


class Reta{

	Ponto v1; 
	Ponto v2;

	public:
		Reta(Ponto p1 ,Ponto p2){
	 	 v1 = p1;
		  v2 = p2;	
	
		}
		
	  float confAngular(Ponto v1, Ponto v2){
	     float a;
	  a = (v1.y - v2.y) / (v1.x - v2.x);
    
	 return a;
	 }
	 
	 void confLinear(){
	 	
	 }
	 

	 
};



class Triangulo{
	
	Ponto v1,v2,v3;
	public:
		 Triangulo (Ponto p1, Ponto p2, Ponto p3){
v1= p1;
v2= p2;
v3= p3;

 }
		
		void calculoTriangulo(){
		
		float respX = v1.getY() + v2.getY() + v3.getY();
			float respY = v1.getY() + v2.getY() + v3.getY();
			
		}
		
		void formaTriangulo(Ponto p1, Ponto p2, Ponto p3){
if(p1.distancia(p1) == p2.distancia(p2) && p2.distancia(p2) == p3.distancia(p1)){
 cout << "Equilatero";//Equilátero
}else if(p1.distancia(p1)==p2.distancia(p2)||p1.distancia(p1)==p3.distancia(p1)||p2.distancia(p2)==p3.distancia(p1)){
cout << "Isoscele";
		//Isósceles, pelo menos 1 lado igual ao outro
	}else
		cout << "Escaleno";
		//Escaleno			
}
	
};

int main(){
Ponto r1(5,5) ,r2(10,10), r3(5,9);
r1.distancia(5,5);
r1.distancia(5,5);
Reta c1(r1,r2);
c1.confAngular(r1,r2);

Triangulo t1(r1,r2,r3);	
t1.calculoTriangulo();
t1.formaTriangulo(r1,r2,r3);


}



