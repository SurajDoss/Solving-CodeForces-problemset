
#include<iostream>

using namespace std;

int main(){

int n , girl1, girl2, girl3, count_pass;
count_pass= 0;
cin>> n;
while(n--){
    cin>>girl1>>girl2>>girl3;
    if(girl1+girl2+girl3 >=2){
        count_pass++;
    }
}
cout<<count_pass<< endl;
return 0;



}
