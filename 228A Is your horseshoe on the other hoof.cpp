#include <iostream>
#include <algorithm>

using namespace std;

int main(){

int shoe[3], n, counter(0);


for(int i = 0; i<4; i++){
    cin>> shoe[i];
}
sort(shoe, shoe + 4 );

for(int i = 0; i<3; i++){
    if(shoe[i]== shoe[i+1]){
        counter++;
    }
}
cout<< counter<< endl;
return 0;
}
