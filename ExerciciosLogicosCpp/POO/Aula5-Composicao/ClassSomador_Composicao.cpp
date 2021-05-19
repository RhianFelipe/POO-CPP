#include <cstdio>


class Somador {
  double valor;
  public:
    Somador() {
      valor = 0;
    } // padrao
  Somador(double v) {
    valor = v;
  }

  void soma(double v) {
    valor += v;
  }
  double getValor() {
    return valor;
  }
};

class Media {
  Somador valor;
  Somador qtd;
  public:
    void adiciona(double v) {
      valor.soma(v);
      qtd.soma(1);
    }

  double getMedia() {
    return valor.getValor() / qtd.getValor();
  }

  void mostra() {
    printf("\ntotal: %lf", valor.getValor());
    printf("\nquantidade: %lf", qtd.getValor());
    printf("\nmedia: %lf", getMedia());
  }
};

int main() {
  Media m1;
  double valor = 0.0;
  while (valor >= 0) {
    printf("\nDigite um valor positivo (negativo encerra): ");
    scanf("%lf", & valor);
    if (valor >= 0)
      m1.adiciona(valor);
  }
  m1.mostra();
}
