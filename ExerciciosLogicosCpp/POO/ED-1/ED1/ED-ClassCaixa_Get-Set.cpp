#include <cstdio> // printf
#include <iostream> // cout
using namespace std;



class Caixa {
private:
    double altura; // metros
    double largura;
    double profundidade;
    double peso;
    int empilhamento;


public:
// construtor
    Caixa(double altura, double largura, double profundidade) {
        this->altura = altura; // atributo = parametro
        this->largura = largura;
        this->profundidade = profundidade;
    }

    Caixa() {
        altura = 0;
        largura = 0;
        profundidade = 0;
    }


    Caixa(double altura, double largura, double profundidade , double peso, int empilhamento) {
        this->altura = altura;
        this->largura = largura;
        this->profundidade = profundidade;
        this->peso = peso;
        this->empilhamento = empilhamento;
    }

//Destrutor
    ~Caixa() { // destrutor
        printf("\nCaixa destruido");
    }

    /*------------------------------------------------------------------------------------------------------------------*/

//Getters
    double getAltura() {
        return this->altura;
    }

    double getLargura() {
        return this->largura;
    }

    double getProfundidade() {
        return this->profundidade;
    }

    double getPeso() {
        return this->peso;
    }

    double getEmpilhamento() {
        return this->empilhamento;
    }

//Setters
    void setAlturaNegativa(double alt) {
        if(alt < 0)	printf("\nErro:Altura Negativa!");
        else altura = alt;
    }

    void setLarguraNegativa(double larg) {
        if(larg < 0)	printf("\nErro:Largura Negativa!");
        else largura = larg;
    }

    void setProfundidadeNegativa(double prof) {
        if(prof < 0)	printf("\nErro:Profundidade Negativa!");
        else  profundidade = prof;
    }

    void setGramaForKilo(double p) {
        peso = (p / 1000);
    }

    /*------------------------------------------------------------------------------------------------------------------*/

    double area() {
        return altura*largura;
    }

    double volume() {
        return altura*largura*profundidade;
    }

    void mostra() {
        printf("\nCaixa:{a:%.2lfm, l:%.2lfm, prof:%.2lfm, peso:%.2lfm}", altura, largura, profundidade, peso);
        printf("\narea: %.4lf m^2", area());
        printf("\nvolume: %.4lf m^3", volume());
    }

    int numCaixasSala(double alt, double larg, double prof) {
        int a = (int) alt / altura;
        int l = (int) larg / largura;
        int p = (int) prof / profundidade;
        return a*l*p;
    }

    void ajustarMedidas(double p, int emp) {
        peso = p;
        empilhamento = emp;
    }

    void ajustarMedidas(double a, double l, double prof) {
        altura = a;
        largura = l;
        profundidade = prof;

    }

    void ajustarMedidas(double a,double l,double prof,double p,int emp) {
        altura = a;
        largura = l;
        profundidade = prof;
        peso = p;
        empilhamento = emp;

    }

};


int main()
{
    Caixa c1(1.5,2,1.5), c2(3,4,5), celular(0.08,0.05,0.14);
    c1.setAlturaNegativa(-10);

    c1.setGramaForKilo(1000);

    c1.mostra();

    c1.ajustarMedidas(55,5);

    c1.mostra();
}
