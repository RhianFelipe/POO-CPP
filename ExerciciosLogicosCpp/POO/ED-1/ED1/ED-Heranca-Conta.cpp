#include <iostream>
#include <math.h>
#include <string>
using namespace std;


class Conta {

protected:
    string nome;
    double valorMonetario;
    static int codigo;
public:

    Conta(string nome, double valorMonetario) {
        this->nome = nome;
        this->valorMonetario = valorMonetario;

        codigo++;
    }
    Conta() {

        codigo++;
    }

    void  realizarDeposito(double valor) {
        this->valorMonetario += valor;
        cout << "\n" << valorMonetario;
    }

    void sacar(double valor) {
        this->valorMonetario -= valor;
        cout << "\n" << valorMonetario ;
    }

    double getSaldo() {
        return this->valorMonetario;
    }

    static int getCodigo() { // formatar depois
        cout << "\n000"<< codigo;
    }


};

class ContaCorrente : public Conta {

public:

    ContaCorrente(string nome, double valorMonetario) : Conta(nome, valorMonetario) {

    }

    void  realizarDeposito(double valor) {
        this->valorMonetario += valor;
        cout << "\n" << valorMonetario;
    }


    void sacar(double valor) {
        if(valor < 1) {
            cout << "\nERRO:valor menor que um";
        } else if(valor > valorMonetario) {
            cout << "\nERRO:valor maior que o limite";
        } else if(valor > 2000) {
            cout << "\nERRO:valor nao pode ultrapassar de 2000";

        } else {
            double novoSaldo = this->valorMonetario - valor;
            this->valorMonetario = novoSaldo;

        }




    }

    double getSaldo() {
        return this->valorMonetario;
    }


};

class ContaEspecial: public Conta {
    double limite;
public:
    ContaEspecial(string nome, double valorMonetario, double limite): Conta(nome,valorMonetario) {
        this->limite = limite;
    }

    void  setLimiteCredito(double valor) {

        limite = valor;
    }




    void sacar(double valor) {
        if(valor < 1) {
            cout << "\nERRO:valor menor que um";
        } else if(valor > limite + valorMonetario) {
            cout << "\nERRO:valor maior que o limite";
        } else {
            double novoSaldo = this->valorMonetario - valor;
            this->valorMonetario = novoSaldo;

        }

    }



    void  realizarDeposito(double valor) {
        this->valorMonetario += valor;
        cout << "\n" << valorMonetario;
    }


    void cobrarTaxa() {
        if(valorMonetario > 0)
            valorMonetario =  valorMonetario - (valorMonetario * 0.05);
        else
            cout << "\nERRO:o valor do saldo ainda não foi depositado, portanto não é possivel cobrar a taxa";

    }

    double getSaldo() {
        return this->valorMonetario;
    }



};

class ContaPoupanca : public Conta {

public:
    ContaPoupanca(string nome, double valorMonetario) : Conta(nome,valorMonetario) {

    }
    void reajusteMensal() {

    }



    void sacar(double valor) {
        if(valor < 1) {
            cout << "\nERRO:valor menor que um";
        } else if(valor >  valorMonetario) {
            cout << "\nERRO:valor maior que o limite";
        } else {
            double novoSaldo = this->valorMonetario - valor;
            this->valorMonetario = novoSaldo;

        }

    }



    void realizarDeposito(double valor) {
        this->valorMonetario += valor;
        cout << "\n" << valorMonetario;
    }


    double getSaldo() {
        return this->valorMonetario;
    }


};


int Conta::codigo = 0001;



int main() {

    ContaCorrente cc("Pedro", 1200);
    ContaEspecial ce("Maria", 500, 1000);
    ContaPoupanca cp("Jeff", 850);

    cc.sacar(700);
    cout << "\n" << cc.getSaldo();

    ce.realizarDeposito(1000);
    ce.cobrarTaxa();
    ce.sacar(900);
    cout << "\n" << ce.getSaldo();


    cout << "\n" << cp.getSaldo();



    Conta::getCodigo();
}
