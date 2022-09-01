#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    cout << "Your array: ";

    for (int i = 0; i < n; i++){
        cout << arr[i] << ", ";
    }
}

int binarySearch(int arr[], int n, int s){
    int low = 0;
    int high = n-1;

    while (low <= high){
        int mid = (low + high)/2;

        if(s == arr[mid]){
            return mid;
        }else if(s < arr[mid]){
            high = mid-1;
        }else if(s > arr[mid]){
            low = mid+1;
        }
    }

    return -1;
}

int main() {

    int arr[50], size, search;

    cout << "Length: ";
    cin >> size;

    cout << "\nInsert " << size << " numbers: ";

    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }

    printArray(arr, size);

    cout << "\nSearch: ";
    cin >> search;

    int result = binarySearch(arr, size, search);

    if(result > -1){
        cout << "Search found on index " << result;
    }else{
        cout << "Search not found";
    }

    return 0;
}