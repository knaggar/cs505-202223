/*
Read an array fro user inputs and print in reverse order

Author: Kareem Eid
ID: 202200420
*/

#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Enter number of array elements: ";
    cin >> n;

    int* arr = new int[n];

    cout << "Enter array elements: ";
    for (int i=0; i<n; i++) cin >> arr[i];

    int *first_elem = arr;
    int *last_elem = arr + n - 1;

    while (first_elem < last_elem) {
        int tmp = *first_elem;

        *first_elem = *last_elem;
        *last_elem = tmp;

        first_elem++;
        last_elem--;
    }

    cout << "Elements in reverse order are: ";

    for (int i=0; i<n; i++) cout << *arr++ << " ";

    cout << endl << endl;

    return 0;
}