
# Binary Search

- A **searching algorithm** used in a sorted array by repeatedly **dividing the search interval in half**. 
- The idea of binary search is to use the information that the array is sorted and reduce the time complexity to **O(Log n)**.

## Why Time Complexity = O(logn)?
- At each iteration, the array is divided by half. So let’s say the length of array at any iteration is n
```
//At Iteration 1, 
Length of array = n

//At Iteration 2, 
Length of array = n/2

//At Iteration 3, 
Length of array = (n/2)/2 = n/2*2 = n/4

//Therefore, after Iteration k, 
Length of array = n/2^k
```
Also, we know that after k iterations, the length of array becomes 1
Therefore , 
``` 
Length of array = n/2k = 1
=> n = 2k
```
Applying log function on both sides: 
```
=> log2 (n) = log2 (2k)
=> log2 (n) = k log2 2
```

As (loga (a) = 1) 
Therefore, 
``` 
=> k = log2 (n)
```

## Algorithm
- Find **mid**.
- compare **mid** and **target**.
    - **if** (**target=mid):** then **return** **index**.
   - **else** decide which part to proceed further
- **repeat** until found **else** return **-1**.

## Pseudocode
```
  binarySearch(arr, x, low, high)
        repeat till low = high
               mid = high + ((low - high)/2)
                   if (x == arr[mid])
                   return mid
   
                   else if (x > arr[mid]) // x is on the right side
                       low = mid + 1
   
                   else                  // x is on the left side
                       high = mid - 1
```


## Optimized calculation of middle index
- To avoid s+e exceed the int range use,
```
mid = start + ( ( end - start) / 2 );
```

## Order Agnostic Binary Search

- Use when we dont know whether the data is sorted in ascending or descending order
```
int orderAgnosticBS(int arr[], int size, int target) {
	int start = 0;
	int end = size - 1;
	int mid = start + ((end - start) / 2);

	bool ifAsc = arr[start] < arr[end];
	
	while (start <= end) {

		if(arr[mid] == target){
			return mid;
		}
		
		if(ifAsc){
			if (target < arr[mid]) { // go left
			    end = mid - 1;
			} else { // go right
			    start = mid + 1;
			}
		} 
		else{
			if (target > arr[mid]) { // go left
			end = mid - 1;
			} else { // go right
			start = mid + 1;
			} 
		}
		mid = start + ((end - start) / 2);
	}
	return -1;
}
```
