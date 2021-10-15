// Immediate Smaller Element
// Basic Accuracy: 50.0% Submissions: 11290 Points: 1

// Given an integer array Arr of size N. For each element in the array, check whether the right adjacent element (on the next immediate position) of the array is smaller.
// If next element is smaller, update the current index to that element. If not, then  -1.

void immediateSmaller(int *arr, int n) {
	    //  code here
	    for(int i=0;i<n-1;i++)
	    {
	        //for last element , let's exclude now, we'll take separately
	        if(arr[i+1]<arr[i])
	        {
	            //araay update
	            arr[i]=arr[i+1];
	        }
	        else
	        {
	            arr[i]=-1;
	        }
	    }
	    //for last element
	    arr[n-1]=-1;
	}
