#include <iostream>
using namespace std;
int main(){
    int nums[5]={4,2,1,2,1};
    int count=0;
    int sin_num=0;
    int n=sizeof(nums)/sizeof(int);
    for(int i=0; i < n; i++){
        for(int j=i+1; j<n; j++){
            if(nums[i] != nums[j]){
                count++;
            }
        }
        sin_num=nums[i];
    }
    if(count = n-1){
        cout << sin_num;
    }
}