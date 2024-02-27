#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key){
    int start=0,end=n-1,mid;
    while(start<=end)
    {   mid=start+(end-start)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key)
        start=mid+1;
        else
         end=mid-1;
    }
    return -1;
}
int main(){
    int arr[1000];
    int n,key;
    cout<<"enter number of elements to be inserted "<<endl;
    cin>>n;
    cout<<"enter the no."<<endl;
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }
    cout<<"enter the key to search "<<endl;
    cin>>key;
    cout<<"element found at index:"<<BinarySearch(arr,n,key)<<endl;
}
