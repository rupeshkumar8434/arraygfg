#include <iostream>
//finding maximum element ka index 
using namespace std;

int getlargest(int *arr,int n){
    for(int i=0;i<n;i++){
        bool flag =true;
        for(int j=0;j<n;j++){
         if(arr[j]>arr[i]){
            flag=false;
            break;
         }
        }if(flag==true){
         return i;   
        }
    }return -1;

}

int main()
{
    int arr[5]={1,4,6,8,9};
    cout<<getlargest(arr,5)<<endl;
    
    return 0;
}


















































































