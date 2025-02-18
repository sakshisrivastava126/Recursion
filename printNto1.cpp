class solution{
 public:
    void printNos(int N) {
        
        cout << N << " ";
        
        if(N==1){
            return;
        }
        else{
            printNos(N-1);
        }
        
    }
};    
