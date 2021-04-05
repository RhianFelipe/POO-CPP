#include <cstdio> // printf
#include <iostream> // cout
using namespace std;



class Caixa {
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

double area() {
return altura*largura;
}

double volume() {
return altura*largura*profundidade;
}

void mostra() {
printf("\nCaixa:{a:%.2lfm, l:%.2lfm, p:%.2lfm}", altura, largura, profundidade);
printf("\narea: %.4lf m^2", area());
printf("\nvolume: %.4lf m^3", volume());
}

int numCaixasSala(double alt, double larg, double prof) {
int a = (int) alt / altura;
int l = (int) larg / largura;
int p = (int) prof / profundidade;
return a*l*p;
}
};



int main()
{
Caixa c1(1.5,2,1.5), c2(3,4,5), celular(0.08,0.05,0.14);

c1.mostra();
c2.mostra();
celular.mostra();
cout << endl << celular.numCaixasSala(3,3,3); // 1
}
