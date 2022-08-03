// Order Agnostic Binary search

#include <iostream>

using namespace std;

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

int main() {
	int arr[5] = {33, 25, 18, 9, -2};
	cout << "The number -2 is present at index-> " << orderAgnosticBS(arr, 5, -2) <<"\n";

	return 0;
}
//output : 4 
