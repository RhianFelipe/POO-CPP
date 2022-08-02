#include <iostream>
#include <cstdio> 
using namespace std;

class Fracao{

int _num;
int _den;		
		
		
public:

Fracao(int num = 0, int den = 1): _num(num), _den(den){}

void soma(Fracao f1,Fracao f2){
		
		if(f1._den == f2._den){
			_num =f1._num + f2._num;
		    _den = f1._den;
		}else{
		_num = (f1._num*f2._den) + ( f1._den*f2._num);
    _den =  f1._den * f2._den;	
		}
 	

	}
	
	void mostra() const{
	 cout << _num << "/" << _den << " ";
	}
	
	double toReal(){
		return (double)_num / _den; //Agora divide Real
	}
	
	double simplifica(){
    int cont = 2;
    while (cont <= _num or cont <= _den){
        
        if (_num % cont == 0 and _den % cont == 0){
            _num = _num/cont;
            _den = _den/cont;
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
