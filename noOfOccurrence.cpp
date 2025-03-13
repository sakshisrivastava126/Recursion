#include <iostream>
#include <vector>
using namespace std;

int noOfOccr(vector<int> &arr, int item, int indx){
    int static count = 0;
    if( indx == arr.size()) return count; 
    if(item == arr[indx]) count = count+1;
    return noOfOccr(arr, item, indx+1);
}

int main(){
    vector<int> arr;
    arr = {1,2,2,2,2,4};
    int ans = noOfOccr(arr, 2, 0);
    cout << ans << endl;
    return ans;
}
