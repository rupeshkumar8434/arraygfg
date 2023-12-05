#include <iostream>

using namespace std;
bool issorted(int *arr,int n){
    for(int i=1;i<n;i++){
     if(arr[i-1]>arr[i]){
        return false;
     }
}
return true;}

int main()
{
    int arr[5]={1,2,3,5};
 cout<<   issorted(arr,4);

    return 0;
}