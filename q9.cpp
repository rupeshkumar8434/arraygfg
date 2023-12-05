#include <iostream>
//reverse an array
using namespace std;
void reverse(int *arr,int n){
    int low=0;
    int high=n-1;
    while(low<high){
      int temp=arr[low] ;
      arr[low] =arr[high];
      arr[high]=temp;
      low++;
      high--;
    }
}

int main()
{
    int arr[6]={2,3,5,0,1,6};
    reverse(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}