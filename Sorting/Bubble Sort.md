
# Bubble Sort
- __Simplest__ Sorting algorithm.
- __Bubble Sort__ works by repeatedly swapping the adjacent elements if they are in the wrong order.
- Its is a  __comparison sort method__ because, it compares adjacent elements in each step.

### Why Bubble Sort (Key points)
- In every __'i' th__ iteration/pass:
    - __'i' th largest element__ will be __sorted__(at the right place).
    - __n-'i' th__ part will be __sorted__.(where, n = size of the array)

### Also known as :
- __Synching Sort__
- __Exchange Sort__
- __Inplace sorting algorithm__ because, its _Space complexity_ is __O(1)__ i.e __constant.__
- __Stable sorting algorithm__ because, maintains original order for the values which are __equal.__




 ## Bubble Sort Visualizer
![Logo](https://1.bp.blogspot.com/-Y5OjJt1kP1w/XrL6BpJ47hI/AAAAAAAABuw/2xuTKm5saeoHlC20on9xSIbDxQINTlMMwCLcBGAsYHQ/s1600/bubble-sort.gif)

 ## Optimized Bubble Sort

- In the bubble sort algorithm, comparisons are made even when the array is already sorted. Because of that, the execution time increases.

- To solve it, we can use a __boolean__ variable __bool swapped__. It is set to **true** if swapping requires; otherwise, it is set to **false**.

- It will be helpful, as suppose after an iteration, if there is no swapping required, the value of variable swapped will be false. It means that the elements are already sorted, and no further iterations are required.

## Code 

```cpp
void bubbleSort(vector<int> &arr, int n){

	int i, j;
	bool swapped = false;
	for(i=0; i<n; i++){	//where i is a counter variable
		for(j = 1; j<n-i; j++){
			if(arr[j]<arr[j-1]){
				swap(arr[j],arr[j-1]);
				swapped = true;
			}
		}
		if(swapped == false){
			cout << "break" << "\n";
			break;
		}
	}
	
}
```


## Time & Space Complexity
| __Case__ | __Time Complexity__ | __Space Complexity__ |
|-------|-----------------|-----------------| 
| __Best Case__ | __O(n)__ | __O(1)__ |
| __Average Case__ | __O(n^2)__ |  __O(1)__  |
| __Worst Case__ | __O(n^2)__ |  __O(1)__ |

- __Best Case Complexity__ - It occurs when there is no sorting required, i.e. the array is __already sorted__. 
- __Average Case Complexity__ - It occurs when the array __elements are in jumbled order__ (not properly ascending and not properly descending). 
- __Worst Case Complexity__ - It occurs when the array elements are  be __sorted in reverse order__. 
    - ___Example :___ you have to sort the array elements in ascending order, but its elements are in descending order. 

## Why Time Complexity = O(n^2) ?
```
  At pass 1 :  Number of comparisons = (n-1)
                     Number of swaps = (n-1)

  At pass 2 :  Number of comparisons = (n-2)
                     Number of swaps = (n-2)

  At pass 3 :  Number of comparisons = (n-3)
                     Number of swaps = (n-3)
                              .
                              .
                              .
  At pass n-1 :  Number of comparisons = 1
                       Number of swaps = 1

Now , calculating total number of comparison required to sort the array
= (n-1) + (n-2) +  (n-3) + . . . 2 + 1
= (n-1)*(n-1+1)/2  { by using sum of N natural Number formula }
= n (n-1)/2    
= ((n^2) - (n)) / 2
= n^2              {by ignoring constants and lower order terms}
```
```

Hence, Time Complexity = O(n^2)
```
