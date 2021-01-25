#include <iostream>
#include <string>


using namespace std;

int main(){

string s;
int length, upper, lower;
upper = lower= 0;

cin>> s;
length = s.length();
for(int i =0; i<length;i++){
    if(isupper(s[i])){
        upper++;
    }
    else if(islower(s[i])){
        lower++;
    }

}
if(lower<upper){
    for(int i = 0; i< length; i++){
        s[i]= toupper(s[i]);
    }
}
else{
    for(int i = 0; i< length; i++){
        s[i]= tolower(s[i]);
    }
}
cout<< s<<endl;
return 0;
}
