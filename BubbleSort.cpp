#include <iostream>
#include <vector>

using namespace std;

void swapping(int &a, int &b) { // Swap the contents of a and b
    int temp = a;
    a = b;
    b = temp;
}

void display(const vector<int>& array) {
    for (int value : array) {
        cout << value << " ";
    }
    cout << endl;
}

void bubbleSort(vector<int>& array) {
    int n = array.size();
    bool swapped;

    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        int lastSwapIndex = n - 1; // Track the last swap index

        for (int j = 0; j < lastSwapIndex; j++) {
            if (array[j] > array[j + 1]) { // When the current item is bigger than the next
                swapping(array[j], array[j + 1]);
                swapped = true; // Set swap flag
                lastSwapIndex = j; // Update last swap position
            }
        }

        if (!swapped) {
            break; // No swap in this pass, so array is sorted
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n); // Create a vector with the given number of elements
    cout << "Enter elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array before Sorting: ";
    display(arr);
    bubbleSort(arr);
    cout << "Array after Sorting: ";
    display(arr);

    return 0;
}
