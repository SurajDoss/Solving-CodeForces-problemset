
#include <iostream>

using namespace std;

int main(){

int location, stepCounter(0);
cin>> location;
stepCounter= location / 5;
if (location % 5 > 0){
    stepCounter++;
}
cout<< stepCounter<< endl;
return 0;
}
