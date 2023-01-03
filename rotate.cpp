class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        long sum=0;
        long n = nums.size();
        long f=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            f+=i*nums[i];
        }
        long res =f;
        for(int k=1;k<n;k++){
            f=f-sum+n*nums[k-1];
            res=max(res,f);
        }
        return res;

        
    }
};