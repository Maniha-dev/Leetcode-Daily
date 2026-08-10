#include <iostream>
using namespace std;

int main(){
    int n=5;
    int arr1[6]={0,1,2,3,4};
    int t=2;
    int val=100;

// Logic to insert 'element' at 'target_index'
for (int i = n; i > t; i--) {
    arr1[i] = arr1[i - 1]; // Right shift
}
n++;
arr1[t] = val;

for(int i = 0; i < n; i++)
    {
        cout << i << " = " << arr1[i] << endl;
    }

    return 0;
}