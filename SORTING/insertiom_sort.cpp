
                                        // INSERTION SORT





void insertionSort(int n, vector<int> &arr){
for(int i =0; i<n; i++){
    int temp = arr[i];
    int j = i-1;
    while(arr[j]>temp && j>=0){
        arr[j+1]=arr[j];
        j--;
    }
     arr[j+1]=temp;
    }
}