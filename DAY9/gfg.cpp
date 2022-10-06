int factorial(int n){
	        int ans = 1;
	        for(int i = 1; i <= n; i++){
	            ans*=i;
	        }
	        return ans;
	    }
	    
		int is_StrongNumber(int n)
		{
		    // Code here.
		    int temp = n;
		    int sum = 0;
		    while(n!=0){
		        int last = n%10;
		        sum += factorial(last);
		        n/=10;
		    }
		    if(sum == temp){
		        return 1;
		    }
		    return 0;
		    
		}