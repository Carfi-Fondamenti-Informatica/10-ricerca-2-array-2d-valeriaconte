#include <iostream>
#include "lib.h"
using namespace std;

int main() {
char lista_nomi[10][20];
    char a[20];
    int pos = 0;

    for(int i=0;i<10;i++){
        for(int j=0;j<20;j++) {
            a[j] = ' ';
            lista_nomi[i][j] = ' ';
        }
    }

    for(int i=0;i<10;i++){
        cin >> lista_nomi[i];
    }

    cin >> a;
    if(ricerca_nome(lista_nomi,pos,a)){
        cout << pos <<endl;
    }else{
        cout << "non trovato";
    }
    return 0;
}
