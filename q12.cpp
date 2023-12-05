#include <bits/stdc++.h>
//finding kth largest element in arry

using namespace std;
int kmax(int *arr,int n ,int k){
    for(int i=0;i<n;i++){
        return arr[k-1];
    }return -1;
}

int main()
{
    int arr[]={4,6,2,5,8,9,5,6,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    cout<<kmax(arr,n,10)<<endl;

    return 0;
}