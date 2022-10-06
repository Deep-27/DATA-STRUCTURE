int findUnique(int array[], int n, int k) {
        unordered_map<int , int>m;
        for(int i=0; i<n; i++){
            m[array[i]]++;
            
        }
        int ans=0;
        for(auto it: m){
            if(it.second%k!=0){
                ans=it.first;
            }
        }
        
        return ans;
    }