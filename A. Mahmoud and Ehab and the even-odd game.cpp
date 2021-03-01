#include <iostream>

using namespace std;

int main(){
    int n, counter;
    int const a = 0;
    cin>>n;
    counter = n-a;

    if(counter%2==0){
        cout<<"Mahmoud"<<endl;
    }
    if(counter%2!=0){
        cout<<"Ehab"<<endl;
    }
    return 0;
}
