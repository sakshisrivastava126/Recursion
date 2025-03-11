#include<iostream>
using namespace std;

int decimalToBinary(int x){
    if(x>1) {
        decimalToBinary(x/2);
    }
    cout << x%2;
}

int main(){
    decimalToBinary(23);
}
