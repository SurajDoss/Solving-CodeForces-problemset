#include <iostream>

using namespace std;

int main(){
int a, b, counter(0);

cin>>a;
while(a--){
    cin>>b;
    if(b>= 1){
        counter++;
    }
}
if(counter >= 1){
    cout<<"HARD"<< endl;
}else {
    cout << "EASY"<<endl;
}
return 0;
}
