#include <iostream>
#include <string>
using namespace std;

int lengthOfString(const string &str){
    if(str == "") return 0;
    return 1 + lengthOfString(str.substr(1));
}

int main(){
    string str = "abcde";
    int ans = lengthOfString(str);
    cout << ans << endl;
    return 0;
}
