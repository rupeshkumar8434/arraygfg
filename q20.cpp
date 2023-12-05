#include <iostream>

using namespace std;
for(int i=0;i<n;i++){
            int count=n;
            for(int j=0;j<n;j++){
              if(i==j){
                  continue;
              }
                if(nums[j]>=nums[i]){
                    count--;
                    x.push_back(count);
                }
            }
        }return x;
    }
};
int main()
{
    

    return 0;
}