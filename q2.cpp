#include <iostream>
//inserting an element // we can not insert in fully filled array 
using namespace std;
int insert(int *arr,int n,int x,int pos){
    int idx=pos-1;
    for(int i=n-1;i>=idx;i--){
        arr[i+1]=arr[i];
        arr[idx]=x;
        return (n+1);
    }return -1;
}
void print(int*arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    
int arr1[10]={2,3,4,5,6,7,8};
print (arr1,10);
cout<<endl;
cout<<insert(arr1,10,1,3)<<endl;
print(arr1,10);
    
    return 0;
}