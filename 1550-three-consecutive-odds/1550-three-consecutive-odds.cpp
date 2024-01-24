class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int sz = arr.size();
        
        for(int i = 0; i < sz-2; i++){
            if(arr[i] % 2 != 0 && arr[i+1] % 2 != 0 && arr[i+2] % 2 != 0){
                return true;
            }
            
        }
        
        return false;
        
    }
};