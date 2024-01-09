#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,2,6};
    int element=0;
    int count=0;
    int n=sizeof(arr)/sizeof(int);
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                element=arr[j];
                count++;
            }
        }
    }
        cout << element;
}