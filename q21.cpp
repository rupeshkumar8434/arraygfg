#include <iostream>

using namespace std;
int peakElement(int arr[], int n)
    { int maxi=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[maxi]){
            maxi=i;
        }
    }return maxi;
int main()
{
    

    return 0;
}