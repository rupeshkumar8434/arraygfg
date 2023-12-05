#include <iostream>
//finding peak element
//using binary search

using namespace std;
int findex(int *arr,int n){
    
    for(int i=1;i<n-1;i++){
        if(arr[i-1]!=arr[i+1]){
        return arr[i];}
    }return -1;
}

int main()
{
    int arr[]={10,20,15,2,23,90,67};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<findex(arr,n)<<endl;

    return 0;
}