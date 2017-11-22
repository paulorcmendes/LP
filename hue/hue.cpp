#include <iostream>
#include <string>
using namespace std;

// To execute C++, please define "int main()"
int main() {
  /*(x1, y1) - Canto superior esquerdo*/
  /*(x2, y2) - Canto inferior direito*/

  int x1, y1, x2, y2;
  int i, n;
  int x, y;
  int qtd = 0;
  int repeat = 0;

   cin >> x1 >> y1 >> x2 >> y2;

  do{
    qtd = 0;
    repeat++;
    cin >> n;
    for(i=0; i<n; i++){
      cin >> x >> y;
      if(x >= x1 && x <= x2 && y >= y2 && y<=y1){
        qtd++;
      }
    }
    cout <<"Teste "<<repeat<<"\n"<<qtd<<"\n\n";
    cin >> x1 >> y1 >> x2 >> y2;
  }while(!(x1 == 0 && y1 ==0 && x2 ==0 && y2==0 ));

}



