#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cout << "enter number of elemet";
    cin >> n;

    float *arr = new float [n];
    cout << "Enter the numbers:" << endl;
    for(int i=0 ;i <n ; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cout << "the entire numbers after sort :" << endl;
    for(int i=0; i <n; i++){
        cout << arr[i] << "\n";
    }
    delete[] arr;
}
