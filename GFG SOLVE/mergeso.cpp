void merge(int a[], int b[], int n, int m) {
	    // code here
	    int start = 0, end = n-1;
	    while(end>=0 && start <= m-1){
	        if(b[start] < a[end]){
	            swap(b[start], a[end]);
	        }
	        start++;
	        end--;
	    }
	    sort(a, a+n);
	    sort(b, b+m);
	}