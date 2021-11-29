#include "lib.h"
bool primos(int a,int i, bool ris){
    i++;
    if(a>1 and (a/2+1)>i){
        if(a%i!=0){
        primos(a,i,ris);
        }
        else {
            ris=false;
            return ris;
        }
    }
    ris=true;
    return ris;}

