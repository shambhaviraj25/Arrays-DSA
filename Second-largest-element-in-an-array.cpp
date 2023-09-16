/*Time complexity:O(N)
  Space complexity:O(1)*/
#include<iostream>
using namespace std;
int secondLargest(int arr[],int n){
    int res=-1;
    int largest=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[largest]){
            res=largest;
            largest=i;
        }
        else if(arr[i]!=arr[largest]){
            if(res==-1 || arr[i]>arr[res]){
                res=i;
            }
        }
    }
    return res;
}
int main()
{
    int arr[]={5,20,12,20,8};
    cout<<secondLargest(arr,5);
    return 0;
}