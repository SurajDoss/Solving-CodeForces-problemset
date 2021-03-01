#include <iostream>

using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    int drink, toasts, limes, salt, mini1, mini2, mini3;
    cin>> n>> k>> l>> c>> d>> p>> nl>> np;
    drink = k * l;
    toasts = drink / nl;
    limes = c * d;
    salt = p / np;
    mini1 = min(toasts, limes);
    mini2 = min(limes, salt);
    mini3 = min(mini1, mini2)/ n;
    cout<< mini3<< endl;
}
