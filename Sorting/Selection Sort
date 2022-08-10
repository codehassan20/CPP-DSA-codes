
# Selection Sort

- The **Selection sort algorithm** is based on the idea of finding the **minimum or maximum element** in an **unsorted array** and then putting it in its correct position in a **sorted array**.

- __Inplace sorting algorithm__ because, its _Space complexity_ is __O(1)__ i.e __constant.__
- __Unstable sorting algorithm__ because, it does'nt maintains original order for the values which are __equal.__

![Logo](https://drive.google.com/uc?export=view&id=1DXsDYoNT_nAQgz219oNxlvB5huszWAwO)


### **Why Selection Sort (Key points & use case)**


- Performs well on **small** **lists** or **arrays**

- The algorithm maintains two subarrays in a given array.

   - The subarray which is already sorted. 
   - Remaining subarray which is unsorted.

- In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray. 

- In a situation where swap operation is very costly, Selection sort must be used as :
   - It works on greedy approach.
   - It makes **O(n) swaps** which is minimum among all sorting algorithms.

## Code 

```cpp
int getMax(vector<int> &arr, int start, int end){
	
	int max = start;
	for(int i = start; i <= end; i++){
		if(arr[max] < arr[i]){
			max = i;
		}
	}
	return max;
}

void swap(vector<int> &arr,int &first, int &second){
	int temp = arr[first];
    arr[first] = arr[second];
    arr[second] = temp;
}

void selectionSort(vector<int> &arr){
	
	for(int i=0; i < arr.size(); i++){
		
		int last = arr.size() - i - 1;
		int maxIndex = getMax(arr, 0, last);
		swap(arr, maxIndex, last);
		
	}	
	
}

```


## Time & Space Complexity
| __Case__ | __Time Complexity__ | __Space Complexity__ |
|-------|-----------------|-----------------| 
| __Best Case__ | __O(n^2)__ | __O(1)__ |
| __Average Case__ | __O(n^2)__ |  __O(1)__  |
| __Worst Case__ | __O(n^2)__ |  __O(1)__ |

- __Best Case Complexity__ - It occurs when there is no sorting required, i.e. the array is __already sorted__. 
- __Average Case Complexity__ - It occurs when the array __elements are in jumbled order__ (not properly ascending and not properly descending). 
- __Worst Case Complexity__ - It occurs when the array elements are  to be __sorted in reverse order__. 
    - ___Example :___ you have to sort the array elements in ascending order, but its elements are in descending order. 

## Why Time Complexity = O(n^2) ?

- To find the maximum element from the array of 'n' elements, (n-1) comparisons are required.


- After putting the maximum element in the proper position, the size of the unsorted array reduces to (n-1) and then (n-2) comparisons are required to find the minimum in the unsorted array.
``` 
  Therefore,

= (n-1) + (n-2) +  (n-3) + . . . + 3 + 2 + 1
= (n-1)*(n-1+1)/2  { by using sum of N natural Number formula }
= n (n-1)/2    
= ((n^2) - (n)) / 2
= n^2              {by ignoring constants and lower order terms}
```
```
Hence, Time Complexity = O(n^2)
```
