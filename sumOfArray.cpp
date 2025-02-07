#include <iostream>
#include <vector>
using namespace std;

int sumOfArray(vector<int>& arr, int i){
  if(i == arr.size()-1) return arr[arr.size()-1];
  return arr[i]+ sumOfArray(arr, i+1);
}

int main(){
    vector<int> arr;
    arr = {1,2,3,4,5,6};
    cout << sumOfArray(arr,0) << endl;
}
