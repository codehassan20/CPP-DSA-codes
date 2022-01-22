// power of 2 using recursion(base case and recurrence realtion mandatory)
#include <iostream>
using namespace std;

int power(int n){
    
    //base case
    if(n==0)
        return 1;
    //recursive relation -> n = 2 * power(n-1);
    n = 2 * power(n-1);
    return n;
}

int main() {
    // Write C++ code here
    cout << "Hello world!\nInput n to calculate 2^(n)"<<endl;
    int n;
    cin>>n;
    int ans = power(n);
    
    cout<<ans<<endl;

    return 0;
}
