#include<bits/stdc++.h>
using namespace std;

void uniqueElement(int arr[], int n) {
    bool isUnique;
    for(int i = 0; i < n; i++) {
        isUnique = true;
        for(int j = 0; j < n; j++) {
            if(i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if(isUnique) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the elements inside the array" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Unique elements are: ";
    uniqueElement(arr, n);

    return 0;
}
