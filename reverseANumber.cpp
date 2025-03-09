#include <iostream>
#include <string>
using namespace std;

void reverseString(std::string &str, int left, int right){
    if(left > right) return;
    else{
        swap(str[left], str[right]);
        reverseString(str, left+1, right-1);
    }
}

int main(){
    int x = 12345;
    string str = to_string(x);
    reverseString(str, 0, str.length()-1);
    int reversedNum = stoi(str);
    cout << reversedNum << endl;
    return 0;
}
