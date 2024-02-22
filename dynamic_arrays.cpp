
#include <iostream>
using namespace std;
int * returnArray(int n)
{
    int * arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the entry " << i << ": ";
        cin >> arr[i];
    }
    return arr;
}
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int * arr = returnArray(n);
    for (int i = 0; i < n; i++)
    {
        cout << "The enteries are " << arr[i] << endl;
    }
    delete [] arr;
}
