#include <iostream>
#include <math.h>
#include <string>

using namespace std;

class Complexo {

    float real;
    float imaginario;

public:
    Complexo() {

    }
    Complexo(float real) {
        this->real = real;
        imaginario = 0;
    }

    Complexo(float real, float imaginario) {
        this->real = real;
        this->imaginario = imaginario;


    }

    float getReal() {
        return real;
    }

    float getImaginario() {
        return imaginario;
    }

    void setReal(float real) {
        this->real = real;
    }

    void setImaginario(float imaginario) {
        this->imaginario = imaginario;
    }

    void modulo() {

        cout << sqrt( (pow(this->real,2) + pow(this->imaginario,2))) << "\n";

    }

    void inversoAditivo() {

        this->real  =	 this->real * -1;
        this->imaginario  =	 this->imaginario  * -1;

    }
    void angulo() {

        cout  << pow(tan(this->imaginario / this->real  ),-1) << "\n";

    }



    Complexo operator +( Complexo valores) {
        Complexo resp;
        resp.real = this->real + valores.real;
        resp.imaginario =this->imaginario + valores.imaginario;
        return resp;

    }
    Complexo operator -(Complexo valores) {
        Complexo resp;
        resp.real = this->real - valores.real;
        resp.imaginario = this->imaginario - valores.imaginario;
        float final =  	resp.real + resp.imaginario;
        return final;
    }

    Complexo operator *(Complexo valores) {
        Complexo resp;

        resp.real = this->real * valores.real -this->imaginario * valores.imaginario;
        resp.imaginario = this->imaginario *valores.real +this->real *  valores.imaginario;
        return resp;
    }

    Complexo operator /(Complexo valores) {
        Complexo resp;
        float den,r;
        if(valores.imaginario < valores.real) {

            r = valores.real / valores.imaginario;
            den =valores.imaginario + r * valores.real;
            resp.real =(this->real  * r + this->imaginario) / den;
            resp.imaginario = (this->imaginario * r - this->real) / den;
            return resp;

        } else {
            r = valores.imaginario/ valores.real;
            den = valores.real + r * valores.imaginario;
            resp.real = (this->real + r * this->imaginario) / den;
            resp.imaginario = (this->imaginario - r * this->real) / den;


            return resp;
        }

    }




    bool operator ==(Complexo valores) {
        if(this->real ==  valores.real &&  this->imaginario == valores.imaginario ) {
            return true;
        } else
            return false;

    }

    void toString() { // ao colocar a funcao como "string" ela so eh executada uma só vez na MAIN.

        cout << "(" << this->real << ";" << this->imaginario << ")\n";
    }

};

int main() {

    Complexo c1(5,5) , c2(10,-5), c3, c4;
    cout << "\nANGULO E MODULO\n";
    c1.angulo();
    c1.modulo();

    cout << "\nINVERSO ADITIVO\n";
    c1.inversoAditivo();
    c1.toString();

    cout << "\nOPERAÇOES BASICAS ARITMETICAS\n";
    c3 = c1 + c2;
    c3.toString();
    c3 = c1 - c2;
    c3.toString();
    c3 = c1 * c2;
    c3.toString();
    c3 = c1 / c2;
    c3.toString();

    if(c1 == c2) {
        cout << "\nOs numeros Complexos sao iguais";
    } else
        cout <<"Os numeros Complexos nao sao iguais";







}
