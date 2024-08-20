class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        // code here
         int mx = INT_MIN;
        for(auto x:arr)mx=max(x,mx);
        int hash[mx+1];
        memset(hash,0,sizeof hash);
        for(auto x:arr)hash[x]=1;
        for(int i=1;i<=mx;i++){
            k-=hash[i];
            if(!k)return i;
        }
        return 0;
    }
};