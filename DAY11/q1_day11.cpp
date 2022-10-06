 #include<bits/stdc++.h>
using namespace std;

int firstLargest(int array[], int n){
    int maxxi = INT_MIN;
    for(int i=0; i<n; i++){
        maxxi = max(maxxi, array[i]);
    }
    return maxxi;
}

int secondLargest(int array[], int n){
    int first = firstLargest(array, n);
    int maxxi = INT_MIN;
    for(int i = 0; i < n; i++){
        if(array[i]!=first){
            maxxi = max(maxxi,array[i]);
        }
    }
    return maxxi;
}


int thirdLargest(int array[], int n){
    int first = firstLargest(array, n);
    int second = secondLargest(array, n);
    int maxxi = INT_MIN;
    for(int i = 0; i < n; i++){
        if(array[i]!=first && array[i]!=second){
            maxxi = max(maxxi,array[i]);
        }
    }
    return maxxi;
}

int fourthLargest(int array [], int n){
    int first = firstLargest(array, n);
    int second = secondLargest(array, n);
    int third = thirdLargest(array , n);

    int maxxi = INT_MIN;
    for (int i=0; i<n; i++ ){
        if(array[i]!=first && array[i]!=second && array[i]!=third){
        maxxi= max(maxxi, array[i]);

       }
   }
   return maxxi;


}

int fifthLargest(int array [], int n){
    int first = firstLargest(array, n);
    int second = secondLargest(array, n);
    int third = thirdLargest(array , n);
    int fourth = fourthLargest(array, n);

    int maxxi = INT_MIN;
    for (int i=0; i<n; i++ ){
        if(array[i]!=first && array[i]!=second && array[i]!=third && array[i]!= fourth){
        maxxi= max(maxxi, array[i]);

       }
   }
   return maxxi;
}

int sixthLargest(int array [], int n){
    int first = firstLargest(array, n);
    int second = secondLargest(array, n);
    int third = thirdLargest(array , n);
    int fourth = fourthLargest(array, n);
    int fifth = fifthLargest(array , n);

    int maxxi = INT_MIN;
    for (int i=0; i<n; i++ ){
        if(array[i]!=first && array[i]!=second && array[i]!=third && array[i]!= fourth && array[i]!=fifth){
        maxxi= max(maxxi, array[i]);

       }
   }
   return maxxi;
}

int main()
{
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }


    
    cout << firstLargest(array, n) << endl;
    cout << secondLargest(array, n) << endl;
    cout << thirdLargest(array, n) << endl;
    cout<<  fourthLargest(array , n)<<endl;
    cout<<  fifthLargest(array , n)<<endl;
    cout<<  sixthLargest(array , n)<<endl;
    

    return 0;
}

