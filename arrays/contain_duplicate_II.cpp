#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,1};
    //The absolute of i-j should be less than k
    int k=3;
    int condition=0;
    for(int i=0; i<(sizeof(arr)/sizeof(int)); i++){
        for(int j=i+1; j<(sizeof(arr)/sizeof(int)); j++){
            // the indexes where two elements are same
            if(arr[i]==arr[j]){
                // finding sqaure to remove negativity
                int square=(i-j) * (i-j);
                // finding squrae root to get absolute of i-j
                int sqrti=sqrt(square);
                condition=sqrti;
            }
        }
    }
    if(condition <= k){
        cout << "True";
    }else{
        cout << "False";
    }
}