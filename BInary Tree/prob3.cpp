#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int b[n];
    for(int i=0;i<n;i++){
        cin >> b[i];
    }

    int l=0, r=0, max_len=0, cnt_zero=0;
    while(r<n){
        if(b[r]==0){
            cnt_zero++;
        }
        while(cnt_zero>k){
            if(b[l]==0){
                cnt_zero--;
            }
            l++;
        }
        max_len = max(max_len, r-l+1);
        r++;
    }

    cout << max_len << endl;

    for(int i=0;i<n;i++){
        if(k>0 && b[i]==0 && max_len>1){
            cout << 1 << " ";
            k--;
            max_len--;
        }
        else{
            cout << b[i] << " ";
        }
    }

    return 0;
}
