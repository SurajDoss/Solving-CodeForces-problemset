#include <iostream>
#include <string>

using namespace std;

int main(){
string  fwd, bck;
int counter(0);

cin >> fwd>> bck;
for (int i = 1 ;i <= fwd.length(); i++){
   if (fwd[i-1]== bck[bck.length()-i]){
    counter++;
    }
    else{
        counter--;
}
}
if(counter==fwd.length()){
    cout<< "YES"<< endl;
}
else{
    cout<<"NO"<< endl;
}

}
