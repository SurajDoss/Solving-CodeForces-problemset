#include <iostream>

using namespace std;

int main(){
int total_rooms, people, available, counter(0);

cin>>total_rooms;
while(total_rooms--){
    cin>>people >> available;
    if((available - people) >= 2){
        counter++;
    }

}
cout << counter<< endl;
return 0;

}
