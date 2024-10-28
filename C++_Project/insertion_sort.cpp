#include <iostream>
using namespace std;

int main() {
    int i;
    int j;
    int num;
    int temp;
    int arr[30];

    cout << "Enter the number of elements of the array: ";
    cin >> num;
    cout << "Enter the elements: ";

    for (i = 0; i < num; i++) {
        cin >> arr[i];
    }

    for (i = 1; i < num; i++) {
        temp = arr[i];
        j = i - 1;

        while (j >= 0 && temp < arr[j]) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }

    cout << "Sorted elements: ";
    for (i = 0; i < num; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
