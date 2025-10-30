#include<iostream>
#include<vector>
using namespace std;

void printSubsequence(vector<int>& ds, int arr[], int mySum, int indx, int sum, int n){
    if(indx == n){
        if(mySum == sum){
            for(auto it : ds){
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }
    //pick
    ds.push_back(arr[indx]);
    mySum += arr[indx];

    printSubsequence(ds, arr, mySum, indx+1, sum, n);

    //not pick
    mySum -= arr[indx];
    ds.pop_back();

    printSubsequence(ds, arr, mySum, indx+1, sum, n);
}

int main(){
    int arr[] = {1,2,1};
    int n=3;
    int sum = 2;
    vector<int> ds;

    printSubsequence(ds, arr, 0, 0, sum, n);

    return 0;
}
