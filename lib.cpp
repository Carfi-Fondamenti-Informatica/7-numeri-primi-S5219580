#include "lib.h"
bool primos(int a,int i){
    i++;
    if(a>1 and a>i){
        if(a%i!=0){
        primos(a,i);
        }
        else {
            return false;
        }
    }
    return true;}

