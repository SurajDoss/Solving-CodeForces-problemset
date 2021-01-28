#include <iostream>

using namespace std;
int this_year(int year_next){
    int a, b, c, d;
    a = (year_next / 1000);
    b = (year_next / 100)%10;
    c = (year_next / 10)%10;
    d = (year_next / 1)%10;

    if( a!= b && a!=c && a!=d && b!= c && b!= d && c!=d){
        return 1;
    }
    else {
        return 0;
    }
}

int main(){

int year;

cin>> year;
for (int i = year+1; year <= 9000; i++){
    int j;
    j = this_year(i);
    if (j==1){
        cout<< i<<endl;
        break;
    }
}
return 0;

}
