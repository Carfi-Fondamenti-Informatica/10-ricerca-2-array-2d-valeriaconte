#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char lista_nomi[10][20], a[20];
    int p=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<20;j++) {
            lista_nomi[i][j]=' ';
            a[j]=' ';
        }
    }
    for(int i=0;i<10;i++){
        cin >> lista_nomi[i];
    }
    cin >> a;
    if(cerca(lista_nomi, a, p)){
        cout << p;
    }
    else{
        cout << "non trovato\n";
    }
    return 0;
}
