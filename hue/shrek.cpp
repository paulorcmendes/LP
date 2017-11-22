#include <iostream>
#include <string>
using namespace std;

// To execute C++, please define "int main()"
int main() {
  struct ponto{
     int x;
     int y;
  };
  int xs, ys, i, qtdPontos, vs, vc;
  cin >> qtdPontos;

  ponto pontosFila[qtdPontos];
  cin >> xs >> ys;

  for(i = 0; i < qtdPontos; i++){
    cin >> pontosFila[i].x >> pontosFila[i].y;
  }

  cin >> vs >> vc;



}



