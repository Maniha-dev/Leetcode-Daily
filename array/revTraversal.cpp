#include <iostream>
using namespace std;
void rev(int arr[], int size){
    for(int i=size-1; i>=0; i--){
        cout << "reverse = " << arr[i]<< endl;
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    rev(arr, 5);

    return 0;
}