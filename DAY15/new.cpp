
#include<bits/stdc++.h>
using namespace std;

int max_element( int a[] , int n ){
    int maxi =INT_MIN;
	for (int i=0; i<n; i++){
	    maxi=max(maxi, a[i]);
	}
	return maxi;
}

int min_element(int b[], int n){
    int minni = INT_MAX;
    for(int i=0; i<n; i++ ){
        minni= min(minni, b[i]);
    }
    return minni;
}

int main()
{

int T;
cin>>T;
while(T--)
{
    int N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
    
cout<<max_element(A,N)<<" "<<min_element(A,N)<<endl;

 }
   

   
return 0;
}

