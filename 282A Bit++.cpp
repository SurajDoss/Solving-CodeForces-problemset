
#include <iostream>
#include <string>

using namespace std;

int main(){
int n, value_x;
cin>>n;
value_x=0;
string s;

while(n--){
        cin>>s;
    if(s[1]== '+' ){
        ++value_x;
    }
    else{
        --value_x;
    }
}

cout<< value_x<<endl;
return 0;


}
