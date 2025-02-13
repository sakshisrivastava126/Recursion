class Solution {
private:
    void combinations(int index, int target, vector<int>& arr, vector<vector<int>> &ans, vector<int> &ds)    {
        if(index == arr.size()){          //checking the base case, index n se bahar na jaye aur target add 
            if(target == 0){              //krte krte 0 ho jaye then it is one of the answers
                ans.push_back(ds);
            }
            return;
        }
            //picked condition - if we pick index
        if(arr[index] <= target){         //element ki size target se kam honi chahiye to add
            ds.push_back(arr[index]);      
            combinations(index, target-arr[index], arr, ans, ds);
            ds.pop_back();                //while backtracking, agar last element jo add kra tha wo remove ni
        }                                 //kra toh wo bhi add ho jayega new combination me
        combinations(index+1, target, arr, ans, ds);          //not picked condition
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        combinations(0, target, candidates, ans, ds);
        return ans;
    }
};
