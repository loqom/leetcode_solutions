class ProductOfNumbers {
public:
    vector<int> ans;
    ProductOfNumbers() {
        ans={1};
    }
    
    void add(int num) {
        if(num==0) ans={1};
        else ans.push_back(ans.back()*num);
    }
    
    int getProduct(int k) {
        if(ans.size()<=k) return 0;
        return ans.back()/ans[ans.size()-1-k];
    }
};