#include<bits/stdc++.h>
using namespace std;

int main()
{

    int array[100], n ,i ;
    int pos=0;

    cin>>n;
    // int array[n];
    for (i =0; i<n; i++){
        cin>>array[i];
    }

    for (i=0; i<n; i++){
        if (array[i]>0)
            pos++;
        
        
        
    }
        cout<<pos;


    return 0;
}


