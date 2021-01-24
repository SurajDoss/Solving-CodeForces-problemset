#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

string username;
cin>> username;

sort(username.begin(), username.end());
username.erase(unique(username.begin(),username.end()), username.end());

if(username.length() % 2 == 0)
    {
       cout << "CHAT WITH HER!" <<endl;
    }
else{
        cout<< "IGNORE HIM!" << endl;
    }
}
