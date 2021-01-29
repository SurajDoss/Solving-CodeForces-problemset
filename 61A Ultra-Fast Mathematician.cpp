#include <iostream>
#include <string>

using namespace std;

int main(){
 string value1, value2;
 cin >> value1 >> value2;

 for(int i = 0 ; i< value1.length(); i++){
    if(value1[i] == value2[i]){
        cout<< "0";
    }
    else{
        cout<< "1";
    }
 }
 return 0;

}
