#include <cstdio>
#include <iostream>
#include <math.h>

using namespace std;

class Ponto{
float x;
float y;
public:

Ponto(){
	this->x = 0;
	this->y = 0;
	
}

Ponto(float a, float b){
  x = a;
  y = b;	
}

void mostra(void){
	printf("\n{%.2f,%.2f}",x,y);
}

void move(float dx, float dy){
	x = dx;
	y = dy;
}

float distancia(float x, float y){
	

	return y - x;
	
}

float distancia(Ponto p1, Ponto p2){
	
	return sqrt((pow((p2.x - p1.x),2))+ (pow((p2.y - p1.y),2)) );
	
}

};

int main(void){
	Ponto p1(20, 50) , p2(10, 20), p3;
	p3.distancia(p1,p2);
	cout << p3.distancia(p1,p2);
}

