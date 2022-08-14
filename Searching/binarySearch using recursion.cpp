#include <iostream>
#include <vector>
using namespace std;

int binaryS(vector<int> &arr, int s, int e,int target){

	//base condition
	if(s > e){
		return -1;	//target not found
	}

	int m = s + (e - s)/2;

	if(arr[m] == target){      //found
		return m;
	}
	else if(arr[m] > target){	//go left
		return binaryS(arr, s, m-1, target);
	}
	else{                    //go right
		return binaryS(arr, m+1, e, target);
	}
		
}

int main() {
	vector<int> arr = {11, 22, 55, 66, 78, 99};
	int target = 6;
	
	//bS(vector, start, end, target)
	cout << "Index of " << target << " : " << binaryS(arr, 0, arr.size()-1, target)<<endl;
	
}

/*
Output
Index of 6 : -1

Index of 11 : 0

Index of 99 : 5
*/
