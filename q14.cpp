#include <iostream>
//finding first index of an element of an array
using namespace std;
int findex(int *arr,int n,int x){
  int s=0;
  int ans=-1;
  int e=n-1;
  while(s<e){
    int mid=(s+e)/2;
    if(arr[mid]==x){
         ans=mid;
        e=mid-1;
    }else if(arr[mid]>x){
        e =mid-1;
    }else{
        s=mid+1;
    }
  }return ans;
}
int main()
{
    int arr[]={2,3,4,5,3,5,4,3};
    cout<<findex(arr,8,5);

    return 0;
}