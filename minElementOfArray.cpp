#include <iostream>
#include <vector>
using namespace std;

int minEle(vector<int> &arr, int indx, int min){

    if( indx == arr.size()) return min; 

    if(min > arr[indx+1]){
        min = arr[indx+1];
    }
    
    minEle(arr, indx+1, min);
}

int main(){
    vector<int> arr;
    arr = {1,2,3,4,56,7};
    int ans = minEle(arr, 0, arr[0]);
    cout << ans << endl;
    return ans;
}
