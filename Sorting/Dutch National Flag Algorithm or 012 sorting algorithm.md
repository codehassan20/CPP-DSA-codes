***cpp
class Solution {
public:
    
    void swap(vector<int>& a, int i, int j){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    
    void sortColors(vector<int>& a) {
        
        int low = 0, mid = 0, high = a.size()-1;
        
        while(mid <= high){
         
            switch(a[mid]){
                    
                //if the element is 0    
                case 0 : 
                    swap(a, low, mid);
                    low++; mid++;
                    break;
                
                //if the element is 1    
                case 1 : 
                    mid++;
                    break;
                
                //if the element is 2    
                case 2 : 
                    swap(a, high, mid);
                    high--;
                    break;
                    
            }
            
        }
        
        
    }
};
***

Follow up: one-pass algorithm using only constant extra space

Algorithm - variation of DNF sort 
Time Complexity => O(N)
Space Complexity => O(1)
- Consider 3 pointers low, mid, high.
- where, low=0, mid=low, high = arr.size()-1.
  (low and mid at first index & high at last index)
- This algorithm is based one the fact that :
    - All the numbers from 0th index to low-1 index are 0's i.e, [0...low-1] = 0
    - All the numbers from high+1 index to n-1 index are 2's i.e, [high+1...n-1] = 2
    - All the numbers from low index to mid-1 index will are 1's i.e, [low...mid-1] = 1
    - Move mid pointer unless and until it crosses high pointer. (mid <= high) 
      Note : do not use mid < high, otherwise mid pointer will not cross high pointer.
    - While moving, we will be having 3 checks :
        1) mid pointer pointing to 0 -> swap(a[low], a[mid]); low++; mid++;
        2) mid pointer pointing to 1 -> mid++;
        3) mid pointer pointing to 2 -> swap(a[high], a[mid]); high--;
           Note : when a[mid]==2, dont move mid pointer.
    - After one-pass, array will be sorted in 0's,1's and 2's.

