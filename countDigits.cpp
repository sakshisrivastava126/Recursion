#include<iostream>
using namespace std;

int count(int x){
    int ans = 0;
    if(x <= 0) return ans;
    ans = 1+ count(x/10);  
}

int main(){
    int x = 255848;
    int ans = count(x);
    cout << ans << endl;
    return ans;
}
