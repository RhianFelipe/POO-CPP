#include "data.h"


int main() {
Data d1(5,4,2021), d2(1,1,2020);

d1.mostra();
d1.mostraAnoBissexto();
d1.mostraTrimestre();
d1.mostraNumDiasMes();

d2.mostra();
d2.mostraAnoBissexto();
d2.mostraTrimestre();
d2.mostraNumDiasMes();

d1.mostra();
}
