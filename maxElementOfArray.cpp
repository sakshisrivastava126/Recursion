#include <iostream>
#include <vector>
using namespace std;

int maxEle(vector<int> &arr, int indx, int max){

    if( indx == arr.size()) return max; 

    if(max < arr[indx+1]){
        max = arr[indx+1];
    }
    
    maxEle(arr, indx+1, max);
}

int main(){
    vector<int> arr;
    arr = {1,2,3,4,56,7};
    int ans = maxEle(arr, 0, arr[0]);
    cout << ans << endl;
    return ans;
}
