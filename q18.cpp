#include <iostream>
//finding pivot element
using namespace std;

int main()
{   int n;
   cin>>n;
   int arr[n];
   for (int i=0;i<n;i++) {
   cin>>arr[i];
   }
   int sum;
   cin>>sum;
   

   
    int index=-1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[i]+arr[j]==sum){
                    cout<<i<<" "<<j;
                    break;
                }
            }
        }

    

    return 0;
}