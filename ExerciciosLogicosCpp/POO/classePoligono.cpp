#include <iostream>
#include <string>
#include <math.h>
using namespace std;


class Poligono{
	 protected:
	float _medida1;
	
	public:
		
	Poligono(float medida1):_medida1(medida1){}
	
	int numLados(){return 0;}
};


class Circulo: public Poligono {
	private:
	const float pi = 3.1415  ;
	
	public:
	Circulo(float medida1) : Poligono(medida1){

	}
	float getRaio()const{
		
		return _medida1;
	}
	
	float getArea() const{
		return pi*pow(_medida1,2);
	}
	
	float getPerimetro() const {
		return 2*pi*_medida1;
	}
	

};

class  Retangulo : public Poligono{
	 protected:
	float _altura;
	public:
	Retangulo(float altura ,float medida1 ) :_altura(altura), Poligono(medida1){
		
	}
	
	float getBase()const{
		return _medida1;
	}
	
	float getAltura()const{
		return _altura;
	}
	
	float getArea(){
		return _medida1 * _altura;
	}
	
	float getPerimetro(){
		return  (2*_medida1) + (2*_altura);
	}
	int numLados(){
		return 0;
	}
	

	
	
	
};

class Quadrado: public Retangulo{
	
	public:
		
		Quadrado(float altura ): Retangulo(altura,_medida1){
		
		}
		
		float getLado() const{
	 	 float _lado = _altura;
			return _lado;
		}
		float getArea() const{
		float _lado = _altura;
			return pow(_lado,2);
		}
		float getPerimetro(){
			float _lado = _altura;
			return 4*_lado;
		}
		
	int numLados(){
		return 0;
	}
	
};
int main(){
	
 Circulo c1(5.5);
 Quadrado q1(10);
 Retangulo r1(10, 50);
	
c1.getArea();
q1.getArea();
r1.getArea();

c1.getPerimetro();	
q1.getPerimetro();	
r1.getPerimetro();

c1.numLados();
q1.numLados();
r1.numLados();

	
}
