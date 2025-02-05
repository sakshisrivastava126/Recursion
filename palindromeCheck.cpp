#include <iostream>
#include <string>
using namespace std;

bool palindromeCheck(std:: string &myStr, int left, int right){
    string temp = myStr;
    if(left >= right) return true;
    if(myStr[left] != myStr[right]) return false;
    return palindromeCheck(myStr, left+1, right-1);   
}

int main(){
    string myStr = "noon";
     if (palindromeCheck(myStr, 0, myStr.length() - 1))
        cout << "Palindrome" << endl;
    else
        cout << "Not a Palindrome" << endl;
    return 0;
}
