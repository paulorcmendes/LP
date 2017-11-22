#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int nPi, total, ideal, i, moves, nSets = 0;

    while(true){
        total = 0;
        moves = 0;
        cin >> nPi;
        if(nPi == 0){
            break;
        }
        nSets++;
        int pi[nPi];

        for(i = 0; i<nPi; i++){
            cin >> pi[i];
            total = total + pi[i];
        }
        ideal = total/nPi;
        for(i = 0; i<nPi; i++){
            if(pi[i]>ideal){
                moves = moves + pi[i]-ideal;
            }
        }

        cout << "Set #"<<nSets<<"\nThe minimum number of moves is "<<moves<<".\n";
    }
}
