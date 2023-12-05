#include <iostream>

using namespace std;
int getlargest(int*arr,int n){
    int res=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[res]){
            res=i;
            
        }
    }return res;
}

int main()
{
    int arr[5]={2,5,3,9,7};
    cout<<getlargest(arr,5)<<endl;
    

    return 0;
}