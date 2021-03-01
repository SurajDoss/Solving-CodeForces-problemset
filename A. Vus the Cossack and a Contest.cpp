#include <iostream>

using namespace std;

int main(){

    int people, pens, book;
    cin>>people>> pens>> book;
    if(pens >= people && book>=people){
            cout<<"YES"<< endl;
        }
    else{
        cout<<"NO"<< endl;
    }
    return 0;
}
