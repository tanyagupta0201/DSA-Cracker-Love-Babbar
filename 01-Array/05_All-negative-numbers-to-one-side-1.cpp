// Move all the negative numbers to the left side of the arrray and positive numbers to the right side of the array
// Two pointer approach

#include <iostream>
using namespace std;

// Function to print the array
void display(int arr[], int n)
{
    for (int i = 0; i <= n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to shift all the negative elements on left side
void Shift_Negative_to_right(int arr[], int left, int right)
{
    while (left <= right)
    {
        if (arr[left] < 0 && arr[right] < 0)
        {
            left += 1;
        }
        else if (arr[left] > 0 && arr[right] < 0)
        {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left += 1;
            right -= 1;
        }
        else if (arr[left] > 0 && arr[right] > 0)
        {
            right -= 1;
        }
        else
        {
            left += 1;
            right -= 1;
        }
    }
}

int main()
{
    int arr[] = {-12, 1, 5, 0, -9, -11, 23};
    int n = sizeof(arr) / sizeof(arr[0]);

    Shift_Negative_to_right(arr, 0, n - 1);
    display(arr, n - 1);
    return 0;
}
