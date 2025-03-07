#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> &arr, int indx, bool asc, bool desc){

    if( indx == arr.size()-1) return asc || desc; 

    if(arr[indx] < arr[indx+1]) desc = false;
    if(arr[indx] > arr[indx+1]) asc = false;

    if (!asc && !desc) return false;

    return isSorted(arr, indx + 1, asc, desc); 
}

int main(){
    vector<int> arr;
    arr = {1,2,3,4,5,7};
    bool ans = isSorted(arr, 0, true, true);
    cout << ans << endl;
    return 0;
}
