#include <iostream>
//finding maximum element 
using namespace std;
int findmax(int*arr,int n){
    int ans=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>ans){
            ans=arr[i];
        }
    }return ans;
}

int main()
{
    int arr[5]={1,4,6,8,5};
    cout<<findmax(arr,5)<<endl;

    return 0;
}