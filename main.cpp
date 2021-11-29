#include <iostream>
#include "lib.h"
using namespace std;
int main() {
    int numero, conta=0;
    cin >> numero;
    primo(numero, 1,conta);
    if (conta==0){
        cout << "numero primo";}
    else{
        cout << "numero non primo";
    }
    return 0;
}
