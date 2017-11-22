#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int a, l, casos=0, ainit, termos;

    while(true){
        casos++;
        termos = 1;
        cin >> ainit>> l;
        if(ainit<0 && l<0){
            break;
        }
        a = ainit;
        while(true){
            if(a == 1){
                break;
            }
            if(a>l || (ainit>=0 && a<0)){
                termos--;
                break;
            }
            if(a%2 == 0){
                a = a/2;
                termos++;
            }else{
                a = (a*3)+1;
                termos++;
            }
        }
        cout << "Case "<< casos <<": A = "<<ainit<<", limit = "<<l<<", number of terms = "<<termos<<"\n";

    }
}

