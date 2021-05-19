#include <iostream>
#include <cstdio> 
using namespace std;

class Fracao{

int num;
int den;		
		
		
public:
		
Fracao(int num = 0, int den = 1){
		this->num = num;
		this->den = den;

	}
 void soma(Fracao f1,Fracao f2){
		
		if(f1.den == f2.den){
			this->num =f1.num + f2.num;
			this->den = f1.den;
		}else{
		this->num = (f1.num*f2.den) + ( f1.den*f2.num);
	this->den =  f1.den * f2.den;	
		}
 	
		
		
	}
	
	void mostra(){
	 cout << num << "/" << den << " ";
	}
	
	double toReal(){
		return (double)num / den; //Agora divide Real
	}
	
	double simplifica(){
    int cont = 2;
    while (cont <= this->num or cont<= this->den){
        
        if (this->num % cont == 0 and this->den % cont == 0){
            this->num = this->num/cont;
            this->den = this->den/cont;
        }else {
            cont++;
        }
      
    }
}
	
};


int main(void){
	Fracao f1(1,2), f2(2,3) ,f3, f4(2), f9(24,48);
	f1.mostra();
	f2.mostra();
	f3.mostra();
	f4.mostra();

cout << endl << f1.toReal();
cout << endl << f2.toReal();
cout << endl << f3.toReal();
cout << endl << f4.toReal();
Fracao f5,f6;
f5.soma(f1,f2);
f6.soma(f2,f4);
cout << endl;
f5.mostra();
f6.mostra();
f9.simplifica();
f9.mostra();

}
