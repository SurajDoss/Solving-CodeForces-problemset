#include <iostream>
#include <cmath>

using namespace std;

int main(){
long long int a, b;
cin>>a;
if( a % 2 == 0){
    b = a /2 ;
}else {
    b = ((a + 1 )/ 2)* (-1);
}
cout << b<< endl;
return 0;
}
