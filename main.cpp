#include <iostream>
#include "lib.h"
using namespace std;
int main(){
int primo=0, i=1;
cin>>primo;
if (primos(primo,i)==true){
  cout<<"numero primo";}
  else{
      cout<<"numero non primo";}
  return 0;
}
