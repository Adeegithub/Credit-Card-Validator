#include <iostream>
#include <string>
using namespace std;

// Function to calculate sum1
int calculateSum1(int arr[], int size) {
    int sum1 = 0;
    int temp[size / 2];  // Temporary array to store the original numbers for sum1
    int index = 0;

    // Collect original numbers for sum1
    for (int i = size - 2; i >= 0; i -= 2) {
        temp[index++] = arr[i];
    }

    // Print original numbers in the correct order
    cout << "Original numbers for sum1: ";
    for (int i = index - 1; i >= 0; i--) {
        cout << temp[i] << " ";
    }
    cout << endl;

    // Calculate sum1
    for (int i = size - 2; i >= 0; i -= 2) {
        int digit = arr[i];
        int doubled = digit * 2;

        // If the doubled value is two digits, add those digits together
        if (doubled > 9) {
            doubled = (doubled / 10) + (doubled % 10);
        }

        sum1 += doubled;
    }

    return sum1;
}

// Function to calculate sum2
int calculateSum2(int arr[], int size) {
    int sum2 = 0;
    int temp[size / 2];  // Temporary array to store the original numbers for sum2
    int index = 0;

    // Collect original numbers for sum2
    for (int i = size - 3; i >= 0; i -= 2) {
        temp[index++] = arr[i];
    }

    // Print original numbers in the correct order
    cout << "Numbers for sum2: ";
    for (int i = index - 1; i >= 0; i--) {
        cout << temp[i] << " ";
    }
    cout << endl;

    // Calculate sum2
    for (int i = size - 3; i >= 0; i -= 2) {
        int digit = arr[i];
        sum2 += digit;
    }

    return sum2;
}

int main() {
    const int MAX_SIZE = 20;
    int arr[MAX_SIZE];
    int count = 0;
    string input;

    cout << "Enter a series of one-digit positive numbers (enter -1 to end):" << endl;
    cin >> input;

    for (char c : input) {
        if (c == '-') {
            break;
        }

        if (c >= '0' && c <= '9') {
            if (count < MAX_SIZE) {
                arr[count] = c - '0';  // Convert char to int
                count++;
            } else {
                cout << "Reached maximum input size." << endl;
                break;
            }
        } else {
            cout << "Invalid input. Please enter a one-digit positive number." << endl;
        }
    }

    cout << "You entered the following numbers:" << endl;
    for (int i = 0; i < count; i++) {
        cout << arr[i];
    }
    cout << endl;

    // Calculate and print sum1
    int sum1 = calculateSum1(arr, count);
    cout << "Sum1: " << sum1 << endl;

    // Calculate and print sum2
    int sum2 = calculateSum2(arr, count);
    cout << "Sum2: " << sum2 << endl;

    return 0;
}
