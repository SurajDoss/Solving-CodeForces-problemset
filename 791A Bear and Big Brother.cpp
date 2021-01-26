#include <iostream>

using namespace std;

int main(){


int limak, bob, YearCounter(0);
cin>>limak >> bob;

while(limak<=bob){
        limak   = 3*limak;
        bob     = 2*bob;
        YearCounter++;
}
cout<< YearCounter<< endl;

return 0;

}
