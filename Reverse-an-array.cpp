//T.C=Theta(n)
//A.S=Theta(1)
#include<iostream>
using namespace std;
void reverse(int arr[],int n){
    int low=0,high=n-1;
    while(low<high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}
int main()
{   
    int arr[]={10,5,7,30},n=4;
    cout<<"Before Reverse"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverse(arr,n);
    cout<<"After Reverse"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}