#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

string str1, str2, str3, combinedString;


cin>> str1 >> str2>> str3;

combinedString = str1 + str2;

sort(str3.begin(), str3.end());
sort(combinedString.begin(), combinedString.end());

if(str3 == combinedString){
    cout<< "YES" << endl;
}else{
    cout<< "NO"<< endl;
}


}
