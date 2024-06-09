#include <iostream>
using namespace std;

// sort array
void insertion_Sort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}


//print array
void print_Array(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}


int main()
{
    int array[] = { 6,3,8,2,6,9,5 };
    int N = sizeof(array) / sizeof(array[0]);
    
    
    cout<<"Before sorting array is: \n";
     print_Array(array, N);
     
     
    insertion_Sort(array, N);
    
    cout<<"\n\n\nAfter sorting array is: \n";
    print_Array(array, N);
 
    return 0;
}
