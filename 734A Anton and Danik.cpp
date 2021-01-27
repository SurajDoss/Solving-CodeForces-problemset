#include <iostream>

using namespace std;

int main(){
int num, counter_anton(0), counter_danik(0);
char ch;
while (cin >> num)
    {

        for ( int i=1; i<=num; i++)
        {
            cin >> ch;

            if (ch == 'A')
                counter_anton++;
            else
                counter_danik++;
        }

        if (counter_anton > counter_danik)
            cout << "Anton" << endl;
        else if (counter_anton < counter_danik)
            cout << "Danik" << endl;
        else
            cout << "Friendship" << endl;
    }
    return 0;
}
