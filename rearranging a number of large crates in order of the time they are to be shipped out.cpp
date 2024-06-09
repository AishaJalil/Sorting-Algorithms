#include <iostream>
using namespace std;



void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        
        arr[j + 1] = key;
    }
}

int main() {
    int n;
    cout << "Enter the number of crates: \n";
    cin >> n;
    
    int crates[n];
    
    cout << "Enter the shipping times of the crates:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> crates[i];
    }
    
    insertionSort(crates, n);
    
    cout << "Sorted order of crates by shipping time:" << endl;
    for (int i = 0; i < n; i++) {
        cout << crates[i] << " ";
    }
    
    return 0;
}
