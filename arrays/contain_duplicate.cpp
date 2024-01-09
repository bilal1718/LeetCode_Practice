#include <iostream>
using namespace std;
int main(){
    int arr[8]={2,3,4,2,4,7,8,8};
    int count=0;
    int repeat_elem[3]={};
    for(int i=0; i<8; i++){
        for(int j=i+1; j<8; j++){
            if(arr[i]==arr[j]){
                cout << "The element " << arr[j] << " is repeat" << endl;
                count++;
            }
        }
    }
    if(count !=0){
        cout << "True, " << " The element is matched " << count << " times";
    }else{
        cout << "False";
    }
}