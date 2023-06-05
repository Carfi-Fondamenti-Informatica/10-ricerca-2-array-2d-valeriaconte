#include "lib.h"
bool cerca(char lista_nomi[10][20], char a[], int &pos){
    for(int i=0;i<10;i++){
        for(int j=0;j<20;j++){
            if(lista_nomi[i][j]!=a[j]){
                j=20;
            }
            else{
                if(j==19){
                    pos=i;
                    return true;
                }
            }
        }
    }
    return false;
}
