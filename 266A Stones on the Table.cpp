#include <iostream>
#include <string>

using namespace std;

int main(){

string s;
int num, counter;
cin>>num>>s;
for (int i= 0; i<num; i++)
    {
        if (s[i] == s[i+1]){
            counter++;
        }
    }
    cout<<counter<<endl;
    return 0;
}
