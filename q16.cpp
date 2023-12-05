#include <bits/stdc++.h>
//frequency of an element
using namespace std;
int countocc(int *arr,int n,int x){
    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            count++;
        }
    }return count;
}

int main()
{
    int arr[]={3,4,5,3,4,5,6,3,4,5,6,7,8,3,2,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    cout<<countocc(arr,n,2);

    return 0;
}