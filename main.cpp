#include <iostream>
#include "lib.h"
using namespace std;
bool ris;
int main(){
  int primo=0, i=1;
  cin>>primo;
  ris=primos(primo,i);
  if (ris==true){
    cout<<"numero primo";
  }
  else{
      cout<<"numero non primo";
  }
  return 0;
}
