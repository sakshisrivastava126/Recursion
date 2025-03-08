#include<iostream>
using namespace std;

bool primeHelper(int x, int i){
    if(i*i > x) return true;
    if(x%i ==0) return false;
    return (x, i+1);
}

bool checkPrime(int x){
    if(x<2) return false;
    return primeHelper(x, 2);
}

int main(){
    int ans = checkPrime(7);
    if(ans == 1){
        cout << "prime num" << endl;
    }
    else{
        cout << "not prime num" << endl;
    }
    return 0;
}
