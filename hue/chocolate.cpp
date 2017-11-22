#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int m, n;


    while(scanf("%d %d", &m, &n)!=EOF){
        cout<<(m-1)+((n-1)*m)<<"\n";
    }
}
