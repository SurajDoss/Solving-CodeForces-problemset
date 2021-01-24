
#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
int i, j, a, x;
x=0;
for (i=1; i<=5; ++i)
    {
    for(j=1; j<=5; ++j)
        {
            cin >> x;
            if(x==1)
                {
                    a=abs(i-3)+abs(j-3);
                    cout<<a;
                    // abs function takes single argument, returns int, long int, long long int. eg: abs(-100) =|-100| = 100

                }

        }
    }
    return 0;
}
