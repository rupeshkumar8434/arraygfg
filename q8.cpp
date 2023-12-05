#include <iostream>
//move all zeros to end
using namespace std;
void movetoend(int *arr,int n){
    for(int i=0;i<n;i++){
       if(arr[i]==0) {
        for(int j=i+1;j<n;j++){
            if(arr[j]!=0){
                swap(arr[i],arr[j]);
            }
        }
       }
    }
}

int main()
{
    int arr[6]={1,0,1,0,1,1};
    movetoend(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}