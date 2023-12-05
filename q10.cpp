#include <iostream>
//left rotate of an array by 1
using namespace std;
void lrotate(int *arr,int n){
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
        arr[n-1]=temp;
    } 
}

int main()
{
    int arr[6]={2,3,5,0,1,8};
    lrotate(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}