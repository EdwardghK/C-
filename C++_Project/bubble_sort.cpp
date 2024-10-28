#include <iostream>
using namespace std;

int main() {
    int i;
    int j;
    int temp;

    int arr[10] = {12, 53, 75, 4, 67, 3, 5, 67, 34, 65};
    cout << "Unsorted array : \n";
    for (i = 0; i < 10; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;

    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (arr[j] < arr[i]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Sorted elements: \n";
    for (i = 0; i < 10; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;

    return 0;
}
