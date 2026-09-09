class RangeFreqQuery {
public:
    vector<unordered_map<int,int>> st;
    int n;
    RangeFreqQuery(vector<int>& arr) {
        n=arr.size();
        st.resize(4*n);
        buildTree(arr,0,n-1,0);
    }
    unordered_map<int,int> addMaps(unordered_map<int,int> &mp1,unordered_map<int,int> &mp2){
        unordered_map<int,int> mp;
        for(auto i : mp1){
            mp.insert(i);
        }
        for(auto i:mp2){
            if(mp.find(i.first)==mp.end()) mp.insert(i);
            else mp[i.first]+=i.second;
        }
        return mp;
    }
    void buildTree(vector<int> &arr,int lo,int hi,int i){
        if(lo==hi){
            st[i].insert({arr[lo],1});
            return;
        }
        int mid=(lo+hi)/2;
        buildTree(arr,lo,mid,2*i+1);
        buildTree(arr,mid+1,hi,2*i+2);
        st[i]=addMaps(st[2*i+1],st[2*i+2]);
    }
    int getSum(int i,int lo,int hi,int l,int r,int val){
        if(l>hi || r<lo) return 0;
        if(lo>=l && hi<=r) {
            if(st[i].find(val)==st[i].end()) return 0;
            return st[i][val];
        }
        int mid=(lo+hi)/2;
        return (getSum(2*i+1,lo,mid,l,r,val)+getSum(2*i+2,mid+1,hi,l,r,val));

    }
    int query(int left, int right, int value) {
        return getSum(0,0,n-1,left,right,value);
    }
};
