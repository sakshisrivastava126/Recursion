#include<iostream>
#include<math.h>
using namespace std;

int binaryToDecimal(int x, int ex){
    if(x == 0) return 0;
    return (x%10)* (pow(2,ex)) + binaryToDecimal(x/10, ex+1);
}

int main(){
    int ans = binaryToDecimal(101111, 0);
    cout << ans;
    return 0;
}
