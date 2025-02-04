#include <iostream>
using namespace std;

int gcd(int x, int y){
    if(x == 0) return y;
    if(y == 0) return x;

    if(x>y) {
        x=x%y;
        gcd(x,y);
    }
    else{
        y=x%y;
        gcd(x,y);
    }
}

int main(){
    cout << gcd(24,18) << endl;
}
