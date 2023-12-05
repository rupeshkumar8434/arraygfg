#include <iostream>
//searching an element and return that index
using namespace std;
int search (int *arr,int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
    }return -1;
}

int main()
{  
    int arr1[50]={2,3,4,5,6,7,8};
    int y=search(arr1,50,8);
    cout<<y<<endl;//direct cout search()bhi kar sakte hain 

    return 0;
}