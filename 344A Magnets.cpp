#include <iostream>

using namespace std;

int main(){
int num, a, b, counter(1);

cin>> num>> a;
for (int i = 1; i<num; i++ ){
    cin>> b;
    if(a!=b){
        counter++;
        a= b;
    }
}
cout<< counter<< endl;
return 0;
}
