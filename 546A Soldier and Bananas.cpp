
#include <iostream>

using namespace std;


int main(){

int k, n, w;
long long counter(0);
cin>> k>>n>> w;
for (int i = 1; i <=w; i++){
    counter = counter + (i*k);
    //cout<< counter<<endl;
}
if(counter <= n){
    cout<< "0"<< endl;
}
else{
    cout<< counter - n<< endl;
}
 return 0;
}
