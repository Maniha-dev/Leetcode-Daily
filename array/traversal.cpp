#include <iostream>
using namespace std;
void traversal(int arr[],int n){
    for (int i=0 ; i<n; i++){
        cout << "Element # "<< i << " = "<< arr[i]<< endl;
    }
}
int main() {
    int arr[5] = {1,2,3,4,5};
    traversal(arr,5);
    return 0;
}