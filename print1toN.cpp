class Solution {
 public:
    void printNos(int n) {
       if(n==0){
           return;
       }
       else{
           printNos(n-1);
       }
       cout << n << " ";
    }
};
