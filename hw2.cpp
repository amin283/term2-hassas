#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;


int main() {
int n;
cout << "enter numer of students:";
cin >> n;

float*  arr = new float[n];
srand(time(0));
for (int i = 0; i < n; i++) {
        float randFloat = static_cast<float>(rand()) / RAND_MAX;
        float randInRange = randFloat * 10 + 10; 
        arr[i] = randInRange;
    }
cout << "generated scores:";
cout <<setprecision (4) << endl;
for (int i =0 ; i<n; i++){
    cout << arr[i]<< " ";
}
delete[] arr;
}
