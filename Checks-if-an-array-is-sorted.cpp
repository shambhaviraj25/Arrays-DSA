//T.C=O(n)
//A.S=O(1)
#include<iostream>
using namespace std;
bool isSorted(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1])
            return false;
    }
    return true;
}
int main()
{  
    int arr[]={5,12,30,2,35};
    int n=5;
    cout<<(isSorted(arr, n)? "true": "false");
    
    return 0;
}